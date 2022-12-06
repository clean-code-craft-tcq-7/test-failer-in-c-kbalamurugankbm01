#include <stdio.h>
#include <assert.h>
#include "alerter.h"

int main() {
    //Assertion for the Stub Code Failure count does not increment
    /*
    assert(alertFailureCount == 0);
    alertInCelcius(networkAlertStub, 0.0);
    assert(alertFailureCount == 0);
    alertInCelcius(networkAlertStub, 400.5);
    assert(alertFailureCount == 0);
    alertInCelcius(networkAlertStub, 600.6);
    assert(alertFailureCount == 0);
    alertInCelcius(networkAlertStub, 1000.0);
    assert(alertFailureCount == 0);
*/

    //Assertion for the Network Code Failure count does increment
    /*
    assert(alertFailureCount == 0);
    alertInCelcius(networkAlert, 0.0);
    assert(alertFailureCount == 0);
    alertInCelcius(networkAlert, 400.5);
    assert(alertFailureCount == 1);
    alertInCelcius(networkAlert, 600.6);
    assert(alertFailureCount == 2);
    alertInCelcius(networkAlert, 1000.0);
    assert(alertFailureCount == 3);
*/
    printf("%d alerts failed.\n", alertFailureCount);
    printf("All is well (maybe!)\n");
    return 0;
}