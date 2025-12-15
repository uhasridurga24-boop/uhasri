#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int rows = 3, cols = 3;
    int i, j;
    int total_sum = 0;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            total_sum += matrix[i][j];
        }
    }

    printf("The total sum of all matrix elements is: %d\n", total_sum);
    return 0;
}
