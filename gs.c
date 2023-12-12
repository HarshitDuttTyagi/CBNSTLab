#include <stdio.h>
#include <math.h>
#define E 0.001
void gaussSeidel(float a[3][3], float b[3], float x[3], int n, int maxIt) {
    int i, j, iter;
    float sum;
    for (iter = 0; iter < maxIt; iter++) 
    {
        float maxDiff = 0.0;
        for (i = 0; i < n; i++) 
        {
            sum=0.0;
            for (j=0;j<n;j++) 
            {
                if (i!=j) 
                {
                    sum+=a[i][j]*x[j];
                }
            }
            float newX = (b[i] - sum) / a[i][i];
            maxDiff = fmax(maxDiff,fabs(newX - x[i]));
            x[i] = newX;
        }
        if (maxDiff < E) 
        {
            printf("Solution found after %d iterations:\n", iter + 1);
            for (i = 0; i < n; i++) {
                printf("x%d = %.6f\n", i + 1, x[i]);
            }
            return;
        }
    }
    printf("Solution did not converge.\n");
}

int main() {
    float a[3][3]; 
    float b[3];    
    float x[3] = {0}; 
    int it;
    printf("Enter coefficients of variables (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%f", &a[i][j]);
        }
    }
    printf("Enter constants (3 values):\n");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &b[i]);
    }
    printf("Enter max no. of iterations: ");
    scanf("%d", &it);
    gaussSeidel(a, b, x, 3, it);
    return 0;
}
