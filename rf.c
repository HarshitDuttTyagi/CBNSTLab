#include <stdio.h>
#include <math.h>
#define E 0.001
double fn(double x) {
    return x*x*x - 4*x - 9;
}
double regularFalsi(double a, double b) {
    double c;
    int it = 0;
    do{
        c = (a*fn(b) - b*fn(a)) / (fn(b) - fn(a));
        it++;
        if (fabs(fn(c)) < E) {
            printf("Root: %.6f\n", c);
            return c;
        }
        if (func(c)*func(a) <0){
            b = c;
        } 
        else{
            a = c;
        }
    } while (iterations < 10); 
    printf("Root not found.\n");
    return 0;
}
int main() {
    double a, b;
    printf("Enter initial interval [a, b]: ");
    scanf("%lf %lf", &a, &b);
    regularFalsi(a, b);
    return 0;
}
