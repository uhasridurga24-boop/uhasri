#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = 3;
    int i, temp;

    printf("Original Matrix:\n");
    for (i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < size; i++) {
        temp = matrix[i][i];
        matrix[i][i] = matrix[i][size - 1 - i];
        matrix[i][size - 1 - i] = temp;
    }

    printf("\nMatrix after swapping diagonals:\n");
    for (i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
