#include <stdio.h>
#include <math.h>
float f(float x){
   return 1 / (1 + x * x);
} 
int main(){
   float l, u, integ = 0.0, step, k, sub;
   printf("Enter lower limit, upper limit of integration, no. of Subintervals: ");
   scanf("%f", &l);
   scanf("%f", &u);
   scanf("%f", &sub);
   step = (u - l)/sub;
   integ = f(l) + f(u);
   for (int i=1; i<=sub-1; i++)
   {
      k = l + i*step;
      if (i % 2 == 0)
         integ = integ + 2*f(k);
      else
         integ = integ + 4*f(k);
   }
   integ = integ * step / 3;
   printf("\nRequired value of integration is: %.3f", integ);
}

