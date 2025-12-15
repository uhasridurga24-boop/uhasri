#include <stdio.h>
#include <stdbool.h>

int main() {
    int matrix[3][3] = {{1, 5, 8}, {5, 2, 9}, {8, 9, 3}}; 
    int size = 3;
    int i, j;
    bool isSymmetric = true;

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) { 
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break; 
        }
    }

    if (isSymmetric) {
        printf("The matrix IS Symmetric (A[i][j] == A[j][i]).\n");
    } else {
        printf("The matrix IS NOT Symmetric.\n");
    }

    return 0;
}
