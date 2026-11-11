#!/usr/bin/env python3
"""Generate a function-by-function progress map from an objdiff JSON report."""
import json
import math
import sys
from pathlib import Path
from xml.sax.saxutils import escape

REPORT = Path(sys.argv[1]) if len(sys.argv) > 1 else Path('.decomp-wtf/report.json')
OUTPUT = Path(sys.argv[2]) if len(sys.argv) > 2 else Path('.github/assets/progress.svg')

with REPORT.open(encoding='utf-8') as f:
    report = json.load(f)

measures = report.get('measures') or {}
functions = []
for unit in report.get('units', []):
    for fn in unit.get('functions', []):
        size = int(fn.get('size', 0))
        if size <= 0:
            continue
        match = float(fn.get('fuzzy_match_percent', 0) or 0)
        state = 'matched' if match >= 99.999 else ('wip' if match > 0 else 'unmatched')
        functions.append((fn.get('name', '(unnamed)'), state))

if not functions:
    raise SystemExit('No per-function information found in report.json. Cannot generate a function map.')

# Objdiff may omit function entries from units without source comparisons.
total_functions = int(measures.get('total_functions', 0) or 0)
if total_functions > len(functions):
    functions.extend([('(not individually reported)', 'unmatched')] * (total_functions - len(functions)))

colors = {'matched': '#38b879', 'wip': '#e8b450', 'unmatched': '#576171'}
counts = {key: sum(state == key for _, state in functions) for key in colors}
count = len(functions)
matched_bytes_pct = float(measures.get('matched_code_percent', 0) or 0)

# 128 columns, automatically adjusted tile height to fit inside a 512x256 SVG.
W, H = 1024, 512
cols = 128
rows = math.ceil(count / cols)
left, right = 32, 32
top, bottom = 93, 83
available_w = W - left - right
available_h = H - top - bottom
gap = 1.0
tile_w = available_w / cols
tile_h = available_h / rows
if tile_h <= 1:
    raise SystemExit(f'Too many functions ({count}) for this map size.')

parts = [
    f'<svg xmlns="http://www.w3.org/2000/svg" width="512" height="256" viewBox="0 0 {W} {H}" role="img" aria-label="Function matching progress">',
    '<rect width="1024" height="512" rx="18" fill="#151b25"/>',
    '<text x="32" y="48" fill="#f1f5f9" font-size="30" font-family="sans-serif" font-weight="bold">Path of Radiance · GFEE01</text>',
    f'<text x="992" y="48" text-anchor="end" fill="#9bd2ff" font-size="27" font-family="sans-serif" font-weight="bold">{matched_bytes_pct:.2f}% code</text>',
    '<text x="32" y="76" fill="#94a3b8" font-size="18" font-family="sans-serif">Each tile represents one function · arranged in report order</text>',
]
for i, (name, state) in enumerate(functions):
    x = left + (i % cols) * tile_w
    y = top + (i // cols) * tile_h
    parts.append(
        f'<rect x="{x:.2f}" y="{y:.2f}" width="{max(tile_w-gap, 0.4):.2f}" height="{max(tile_h-gap, 0.4):.2f}" fill="{colors[state]}"><title>{escape(name)}: {state}</title></rect>'
    )

legend = [('matched', 'Matched'), ('wip', 'Work in progress'), ('unmatched', 'Unmatched / unreported')]
for idx, (key, label) in enumerate(legend):
    x = 32 + idx * 320
    y = 458
    parts.append(f'<rect x="{x}" y="{y}" width="18" height="18" rx="3" fill="{colors[key]}"/>')
    parts.append(f'<text x="{x+27}" y="{y+16}" fill="#e2e8f0" font-size="19" font-family="sans-serif">{label}: {counts[key]:,}</text>')
parts.append(f'<text x="32" y="495" fill="#94a3b8" font-size="16" font-family="sans-serif">{count:,} functions · Source: objdiff report.json · Matched code percentage is byte-based</text>')
parts.append('</svg>')
OUTPUT.parent.mkdir(parents=True, exist_ok=True)
OUTPUT.write_text('\n'.join(parts) + '\n', encoding='utf-8')
print(f'Created {OUTPUT} ({count:,} functions: {counts["matched"]:,} matched, {counts["wip"]:,} WIP, {counts["unmatched"]:,} unmatched/unreported)')
