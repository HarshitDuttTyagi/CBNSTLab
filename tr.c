#include <stdio.h>
#include <math.h>
float fn(float x)
{
  return 2 * pow(x, 2) + 3 * x;
}

int main(){
  float n, u, l, h, sum, integ;
  printf("Enter lower limit: ");
  scanf("%f", &l);
  printf("Enter upper limit: ");
  scanf("%f", &u);
  printf("Enter no. of subintervals: ");
  scanf("%f", &n);
  h = (u - l) / n;
  sum = fn(u) + fn(l);
  int i = 2;
  while (i <= n)
  {
     sum= sum + 2 * fn(l + (i-1) * h);
     i++;
  }
  integ = h * sum / 2;
  printf("\n Answer: %f", integ);
}