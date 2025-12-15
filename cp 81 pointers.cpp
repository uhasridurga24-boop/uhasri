#include <stdio.h>

int main() {
    int value = 42;
    int *ptr;

    ptr = &value;

    printf("Value: %d\n", value);
    printf("Value via pointer: %d\n", *ptr);

    *ptr = 99; 

    printf("New Value: %d\n", value);
    
    return 0;
}
