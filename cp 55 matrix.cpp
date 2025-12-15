#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 0, 0}, {0, 5, 0}, {7, 0, 0}};
    int rows = 3, cols = 3;
    int total_elements = rows * cols;
    int zero_count = 0;
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zero_count++;
            }
        }
    }

    printf("Total zero elements: %d\n", zero_count);
    if (zero_count > (total_elements / 2)) {
        printf("The matrix is a SPARSE Matrix.\n");
    } else {
        printf("The matrix is NOT a sparse matrix.\n");
    }

    return 0;
}
