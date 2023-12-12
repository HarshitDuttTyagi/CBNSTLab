#include <stdio.h>
float func(float x, float y){
   return (1 + x) / y;
}
int main(){
   float x0, y0, h, xn, k;
   printf("Enter x0:");
   scanf("%f", &x0);
   printf("Enter y0:");
   scanf("%f", &y0);
   printf("Enter xn:");
   scanf("%f", &xn);
   printf("Enter h:");
   scanf("%f", &h);
   while (x0 < xn){
      k = h * func(x0, y0);
      y0 = y0 + k;
      x0 = x0 + h;
   }
   printf("Value of y at  %.3f is : %.3f\n", x0, y0);
}
