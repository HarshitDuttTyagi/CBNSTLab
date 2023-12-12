#include <stdio.h>
#include <math.h>
#define E 0.001
double fn(double x) {
    return x*x*x - 4*x - 9;
}
double derfn(double x) {
    return 3*x*x - 4;
}
double newtonRaphson(double x0) {
    double x1;
    int it = 0;
    do {
        x1 = x0 - fn(x0) / derfn(x0);
        it++;
        if (fabs(x1 - x0) < E) {
            printf("Root: %.6f\n", x1);
            return x1;
        }
        x0 = x1;
    } while(it < 10);
    printf("Root not found.\n");
    return 0;
}
int main() {
    double guess;
    printf("Enter initial guess: ");
    scanf("%lf", &guess);
    newtonRaphson(guess);
    return 0;
}