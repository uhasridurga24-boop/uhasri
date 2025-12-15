#include <stdio.h>
#include <stdbool.h>

int main() {
    int matrix[3][3] = {{1, 0, 0}, {4, 5, 0}, {7, 8, 9}}; 
    int size = 3;
    int i, j;
    bool isLowerTriangular = true;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i < j && matrix[i][j] != 0) {
                isLowerTriangular = false;
                break;
            }
        }
        if (!isLowerTriangular) break;
    }

    if (isLowerTriangular) {
        printf("The matrix IS a Lower Triangular Matrix.\n");
    } else {
        printf("The matrix IS NOT a Lower Triangular Matrix.\n");
    }

    return 0;
}
