#include <stdio.h>
#include <math.h>
#define E 0.001
double fn(double x) {
    return x*x*x - 4*x - 9;
}
double bisection(double a, double b) {
    double c = a;
    while ((b - a) >= E) 
    {
        c = (a + b) / 2;
        if (fabs(fn(c)) < E) 
        {
            break;
        }
        if (fn(c) * fn(a) < 0) 
        {
            b = c;
        } 
        else 
        {
            a = c;
        }
    }
    return c;
}
int main() {
    double a, b;
    printf("Enter initial guesses (a and b): ");
    scanf("%lf %lf", &a, &b);
    if (fn(a) * fn(b) >= 0) {
        printf("Invalid initial guesses.\n");
    } 
    else {
        double root = bisection(a, b);
        printf("Root: %lf\n", root);
    }
    return 0;
}
