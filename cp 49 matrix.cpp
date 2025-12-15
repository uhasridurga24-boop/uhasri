#include <stdio.h>

int main() {
    int original[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int transpose[2][3];
    int i, j;
    int rows = 3, cols = 2;

    printf("Original Matrix (3x2):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", original[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = original[i][j];
        }
    }

    printf("\nTranspose Matrix (2x3):\n");
    for (i = 0; i < cols; i++) { 
        for (j = 0; j < rows; j++) { 
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
