#include <stdio.h>

int main() {
    int arr[] = {45, 12, 78, 5, 99, 33};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    int max = arr[0];
    int min = arr[0]; 

    for (i = 1; i < size; i++) { 
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Array elements: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nLargest element: %d\n", max);
    printf("Smallest element: %d\n", min);
    return 0;
}
