#include <stdio.h>
#include "alerter.h"
 
int alertFailureCount = 0;

int networkAlertStub(float celcius) {
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    return 200;
}

int networkAlert(float celcius) {
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
    // Return 200 for ok
    // Return 500 for not-ok
    
    // Assumption If celcius is less than 200 for ok else not-ok
    if (celcius < 200.0) {
        return 200;
    }else {
        return 500;
    }

}

void alertInCelcius(networkAlert_ptr_t networkAlert_func, float farenheit) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = networkAlert_func(celcius);
    if (returnCode != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 1;
    }
}