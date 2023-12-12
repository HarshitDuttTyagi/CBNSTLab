#include <stdio.h>
void gaussElim(float m[3][4]) {
    int i, j, k;
    float ratio, temp;
    for(i = 0; i < 3; i++) {
        for(j = i+1; j < 3; j++) {
            ratio = m[j][i] / m[i][i];
            for(k = 0; k < 4; k++) {
                m[j][k] -= ratio * m[i][k];
            }
        }
    }
    for(i = 2; i >= 0; i--) {
        temp = m[i][3];
        for(j = i+1; j < 3; j++) {
            temp -= m[i][j] * m[j][3];
        }
        m[i][3] = temp / m[i][i];
    }
}

int main() {
    float m[3][4];
    printf("Enter augmented matrix (3x4):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%f", &m[i][j]);
        }
    }
    gaussElim(m);
    printf("Solutions:\n");
    for(int i = 0; i < 3; i++) {
        printf("x%d = %.2f\n", i + 1, m[i][3]);
    }
    return 0;
}
