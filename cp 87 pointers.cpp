#include <stdio.h>
void printArray(int *arr, int size) {
    int i;
    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int numbers[] = {100, 200, 300, 400};
    int n = 4;
    printArray(numbers, n);

    return 0;
}
