#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; 

    printf("Element 1 (arr[0]): %d\n", *ptr);

    ptr++; 

    printf("Element 2 (arr[1]) after increment: %d\n", *ptr);

    ptr += 2; 

    printf("Element 4 (arr[3]) after += 2: %d\n", *ptr);

    return 0;
}
