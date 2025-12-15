#include <stdio.h>
void squareElements(int arr[], int size);

int main() {
    int values[] = {2, 4, 6, 8};
    int size = 4;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", values[i]);
    }
    
    squareElements(values, size);
    
    printf("\nArray after squaring: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", values[i]); 
    }
    printf("\n");
    return 0;
}
void squareElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * arr[i];
    }
}
