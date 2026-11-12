# Fire Emblem: Path of Radiance

[![Code Progress]][progress] [![Data Progress]][progress] [![Functions](https://bytematch.dev/persecom/fepor-decomp.svg?mode=shield&label=Functions&measure=matched_functions)](https://bytematch.dev/persecom/fepor-decomp)

[Code Progress]: https://bytematch.dev/persecom/fepor-decomp.svg?measure=matched_code_percent&label=Code&version=GFEE01
[Data Progress]: https://bytematch.dev/persecom/fepor-decomp.svg?measure=matched_data_percent&label=Data&version=GFEE01
[progress]: https://bytematch.dev/persecom/fepor-decomp

---

This repository contains a work-in-progress decompilation of **Fire Emblem: Path of Radiance (USA)** for the Nintendo GameCube. This repository does not contain any game assets or the original disc image. An existing copy of the game is required.

**Supported versions:**

- `GFEE01`: USA — Target DOL SHA-1: `9d00d7d407750b82cb1cfccc56f8aa8a89cc8851`

## Progress

Decompilation progress is ongoing. This project uses [decompdecomp](https://github.com/decompals/decompdecomp) to assist with matching the original game's code.

## Dependencies

### Linux

The project is currently being developed on CachyOS.

- Python 3
- [Ninja](https://ninja-build.org/)
- [DTK](https://github.com/encounter/dtk)
- A compatible GameCube development toolchain, as required by the project configuration

Other Linux distributions should work with the appropriate dependencies installed.

## Building

1. Clone the repository:

   ```sh
   git clone https://github.com/persecom/fepor-decomp.git
   cd fepor-decomp
   ```

2. Place your game disc image in `orig/GFEE01/`.

   Supported input formats depend on the installed DTK version. RVZ is the format currently used for development.

3. Build the project:

   ```sh
   ninja
   ```

## Diffing

This project uses [objdiff](https://github.com/encounter/objdiff) to compare reconstructed code against the original game.

Once the project has been built and its objdiff configuration generated, open the project in objdiff to inspect individual functions and track matching progress.

## Decompdecomp Integration

This project is being developed with [decompdecomp](https://github.com/decompals/decompdecomp), alongside local development tools and AI-assisted code analysis.

The goal is to progressively reconstruct the original game's code while preserving matching behavior and output.
