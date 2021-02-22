#include <stdio.h>
#include "functions.h"


int main(int argc, char* argv[]) {
    int userArr[LENGTH];
    int i;
    double a=0.0, b=0.0, c=0.0, x1=0.0, x2=0.0;

    for (i = 0; i<LENGTH; ++i){
        scanf("%d", &userArr[i]);
    }
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("average: %.2lf\n", average(userArr));
    quadraticFormula(a, b, c, &x1, &x2);
    printf("x1: %.2lf\nx2: %.2lf\n", x1, x2);
    return 0;
}
