// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8022C1E8(char *block, void (*dtor)(char *, int), int size, unsigned int count) {
    char *p;
    void (*d)(char *, int);

    d = dtor;
    p = block + size * count;
    while (count != 0) {
        p -= size;
        d(p, -1);
        count--;
    }
}
