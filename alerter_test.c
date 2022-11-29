#include <stdio.h>
#include <assert.h>
#include "alerter.h"

int main() {
    
    assert(alertFailureCount == 0);
    alertInCelcius(400.5);
    assert(alertFailureCount == 1);
    alertInCelcius(303.6);
    assert(alertFailureCount == 2);

    assert(alertFailureCount != 0);
    
    printf("%d alerts failed.\n", alertFailureCount);
    printf("All is well (maybe!)\n");
    return 0;
}