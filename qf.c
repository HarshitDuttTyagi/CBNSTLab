#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, d, r1, r2;
    printf("Enter coefficients (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %.2lf and %.2lf\n", r1, r2);
    } 
    else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and equal: %.2lf and %.2lf\n", r1, r2);
    } 
    else {
        double real = -b / (2 * a);
        double imaginary = sqrt(-d) / (2 * a);
        printf("Roots are complex and different: %.2lf + %.2lfi and %.2lf - %.2lfi\n", real, imaginary, real, imaginary);
    }
    return 0;
}
