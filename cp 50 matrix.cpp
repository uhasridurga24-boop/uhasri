#include <stdio.h>

int main() {
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}}; 
    int B[3][2] = {{7, 8}, {9, 10}, {11, 12}}; 
    int C[2][2]; 
    int r1 = 2, c1 = 3, r2 = 3, c2 = 2;
    int i, j, k;
    if (c1 != r2) {
        printf("Error: Matrix multiplication not possible.\n");
        return 1;
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }
    for (i = 0; i < r1; i++) { 
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) { 
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix (A * B):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
