#include <stdio.h>
void gaussJordan(float m[3][4]) {
    for(int i = 0; i < 3; i++) 
    {
        float divisor = m[i][i];
        for(int j = 0; j < 4; j++) {
            m[i][j] /= divisor;
        }
        for(int k = 0; k < 3; k++) 
        {
            if (k != i) 
            {
                float factor = m[k][i];
                for(int j = 0; j < 4; j++) 
                {
                    m[k][j] -= factor * m[i][j];
                }}}}
}

int main() {
    float m[3][4];
    printf("Enter augmented matrix (3x4):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%f", &m[i][j]);
        }
    }
    gaussJordan(m);
    printf("Solutions:\n");
    for(int i = 0; i < 3; i++) {
        printf("x%d = %.2f\n", i + 1, m[i][3]);
    }
    return 0;
}
