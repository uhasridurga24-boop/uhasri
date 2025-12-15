#include <stdio.h>

int main() {
    int matrix[3][4] = {
        {10, 5, 2, 8},
        {1, 9, 15, 3},
        {30, 7, 4, 6}
    };
    int rows = 3, cols = 4;
    int i, j;
    int row_sum, col_sum;

    printf("Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nRow Sums:\n");
    for (i = 0; i < rows; i++) {
        row_sum = 0;
        for (j = 0; j < cols; j++) {
            row_sum += matrix[i][j];
        }
        printf("Sum of Row %d: %d\n", i + 1, row_sum);
    }
    printf("\nColumn Sums:\n");
    for (j = 0; j < cols; j++) {
        col_sum = 0;
        for (i = 0; i < rows; i++) {
            col_sum += matrix[i][j];
        }
        printf("Sum of Column %d: %d\n", j + 1, col_sum);
    }

    return 0;
}
