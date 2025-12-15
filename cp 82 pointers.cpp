#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("arr[0]: %d\n", *ptr);
    
    ptr = ptr + 2; 

    printf("arr[2] after ptr + 2: %d\n", *ptr);
    printf("arr[4] via dereference: %d\n", *(ptr + 2)); 

    return 0;
}
