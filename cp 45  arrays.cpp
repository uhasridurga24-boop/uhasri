#include <stdio.h>

int main() {
    int arr[] = {1, 4, 7, 10, 13, 16, 21};
    int size = 7;
    int even_count = 0;
    int odd_count = 0;
    int i;

    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Array elements: 1 4 7 10 13 16 21\n");
    printf("Total Even Numbers: %d\n", even_count);
    printf("Total Odd Numbers: %d\n", odd_count);
    return 0;
}
