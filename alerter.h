#ifndef ALERTER_H
#define ALERTER_H

typedef int (*networkAlert_ptr_t)(float);

extern int alertFailureCount;
extern int networkAlert(float celcius);
extern int networkAlertStub(float celcius);
extern void alertInCelcius(networkAlert_ptr_t networkAlert_func, float farenheit);

#endif /*ALERTER_H*/