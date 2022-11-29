#include <stdio.h>
#include <limits.h>
#include <assert.h>
#include "tshirts.h"

int main() {
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');

    assert(size(42) == 'M'); //Fails
    assert(size(38) == 'S'); //Fails
    
    assert(size(-1) != 'L'); //Fails
    assert(size(INT_MAX) != 'L'); //Fails
    assert(size(INT_MIN) != 'L'); //Fails

    printf("All is well (maybe!)\n");
    return 0;
}