#include <stdio.h>
#include <stdbool.h>

int main() {
    int matrix[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}; 
    int size = 3;
    int i, j;
    bool isIdentity = true;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == j && matrix[i][j] != 1) {
                isIdentity = false;
                break;
            }
            if (i != j && matrix[i][j] != 0) {
                isIdentity = false;
                break;
            }
        }
        if (!isIdentity) break;
    }

    if (isIdentity) {
        printf("The matrix IS an Identity Matrix.\n");
    } else {
        printf("The matrix IS NOT an Identity Matrix.\n");
    }

    return 0;
}
