#include <stdio.h>
#include <math.h>
float fn(float x, float t){
   return (1 + x) / t;
}
int main(){
   float x0, y0, k, k1, k2, k3, k4, x, y, h, xn;
   printf("Enter x0, y0, xn, h:");
   scanf("%f %f %f %f", &x0, &y0, &xn, &h);
   x = x0;      
   y = y0;
   while (x < xn)
   {
      k1 = fn(x0, y0);
      k2 = fn((x0 + h/2.0) , (y0 + k1 * h/2.0));
      k3 = fn((x0 + h/2.0) , (y0 + k2 * h/2.0));
      k4 = fn((x0 + h) , (y0 + k3*h));
      k = (k1 + 2 * k2 + 2 * k3 + k4) / 6.0;
      y = y + k*h;
      x = x + h;
   }
   printf("Value of y at  %.3f is : %.3f\n", x, y);
}
