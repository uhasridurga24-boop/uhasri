#include <stdio.h>
void printMatrix(int matrix[][3], int rows);

int main() {
    int data[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int rows = 2;
    
    printMatrix(data, rows);
    
    return 0;
}
void printMatrix(int matrix[][3], int rows) {
    int cols = 3; 
    printf("--- Printing Matrix ---\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
