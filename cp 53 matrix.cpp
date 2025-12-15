#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = 3;
    int i;
    for (i = 0; i < size; i++) {
        anti_diagonal_sum += matrix[i][size - 1 - i]; 
    }

    printf("Matrix:\n");
    for (i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of Anti-Diagonal elements (3+5+7) is: %d\n", anti_diagonal_sum);
    return 0;
}
