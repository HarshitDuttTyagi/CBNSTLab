#include<stdio.h>
int main(){
   int n;
   float X;
   scanf("%d %f", &n, &X);
   float x[n], y[n][n];
   for(int i=0; i<n; i++){
      scanf("%f", &x[i]);
   }
   for(int i=0; i<n; i++){
      scanf("%f", &y[i][0]);
   }
   for(int j=1; j<n; j++)
   {
      for(int i=0; i<n-j; i++)
      {
         y[i][j] = y[i+1][j-1] - y[i][j-1];
      }
   }
   printf("Forward Difference Table :- \n");
   for(int i=0; i<n; i++)
   {
      for(int j=0; j<n-i; j++)
      {
         printf("%f ",y[i][j]);
      }
      printf("\n");
   }
   float u = (X - x[0])/(x[1] - x[0]);
   float ans = y[0][0];
   float p = 1.0;
   for(int j=1; j<n; j++)
   {
      p *= ((u - j + 1) / j);
      ans += p * y[0][j];
   }
   printf("\nValue of y at x = %f is %f\n", X, ans);
}