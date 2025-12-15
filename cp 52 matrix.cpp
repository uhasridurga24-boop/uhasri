#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = 3;
    int i;
    int diagonal_sum = 0;
    for (i = 0; i < size; i++) {
        diagonal_sum += matrix[i][i];
    }

    printf("Matrix:\n");
    for (i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of Principal Diagonal elements (1+5+9) is: %d\n", diagonal_sum);
    return 0;
}
