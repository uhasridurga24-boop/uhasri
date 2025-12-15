#include <stdio.h>

int main() {
    int matrix[3][4] = {{10, 5, 20}, {1, 99, 15}, {30, 8, 45}};
    int rows = 3, cols = 3;
    int i, j;
    int max = matrix[0][0];
    int min = matrix[0][0]; 

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    printf("Largest element in the matrix: %d\n", max);
    printf("Smallest element in the matrix: %d\n", min);
    return 0;
}
