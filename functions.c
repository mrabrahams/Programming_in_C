#include <math.h>
#include "functions.h"


double average(const int* userArr){
    double avg = 0.0;
    int i;

    for (i = 0; i < LENGTH; ++i){
        avg = avg + userArr[i];
    }

    avg = avg/LENGTH;

    return avg;
}

void quadraticFormula(double a, double b, double c, double* x1, double* x2){
    *x1 = ((-b)+sqrt(pow(b, 2)-(4*a*c)))/(2*a);
    *x2 = ((-b)-sqrt(pow(b, 2)-(4*a*c)))/(2*a);
}