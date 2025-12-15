#include <stdio.h>

int main() {
    int data[5] = {1, 2, 3, 4, 5};
    int i;
    printf("Accessing array elements:\n");
    for (i = 0; i < 5; ++i) {
        printf("data[%d] = %d\n", i, data[i]);
    }

    printf("\nAccessing array elements via pointer arithmetic:\n");
    for (i = 0; i < 5; ++i) {
        printf("*(data + %d) = %d\n", i, *(data + i));
    }

    return 0;
}
