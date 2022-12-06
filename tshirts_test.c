#include <stdio.h>
#include <limits.h>
#include <assert.h>
#include "tshirts.h"

int main() {

    //Range Cases
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    assert(size(42) == 'M');
    assert(size(38) == 'S');
    assert(size(1) == 'S');

    //Boundary Cases
    assert(size(0) == '\0');
    assert(size(-1) == '\0');
    assert(size(INT_MAX) == 'L');
    assert(size(INT_MIN) == '\0');

    printf("All is well (maybe!)\n");
    return 0;
}