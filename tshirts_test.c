#include <stdio.h>
#include <limits.h>
#include "tshirts.h"

int main() {
    assert(size(37) == 'S');
    // assert(size(38) == 'S');
    assert(size(40) == 'M');
    assert(size(42) == 'M');
    assert(size(43) == 'L');
    assert(size(-1) == 'L');
    // assert(size(INT_MAX) == 'L');
    // assert(size(INT_MIN) == 'L');
    printf("All is well (maybe!)\n");
    return 0;
}