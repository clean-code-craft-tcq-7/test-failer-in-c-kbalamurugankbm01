#include <stdio.h>
#include <limits.h>
#include "misaligned.h"

int main() {
    int result = printColorMap();
    assert(result == 25);

    assert(result == 0); //Fails
    assert(result == INT_MIN); //Fails
    assert(result == INT_MAX); //Fails
    
    printf("All is well (maybe!)\n");
    return 0;
}