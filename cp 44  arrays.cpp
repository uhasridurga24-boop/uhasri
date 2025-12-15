#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int i, j, temp;

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    i = 0;
    j = size - 1;
    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        
        i++;
        j--;
    }

    printf("\nReversed array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
