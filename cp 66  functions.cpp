#include <stdio.h>
int square(int n);
int cube(int n);

int main() {
    int choice, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Choose operation:\n1. Square\n2. Cube\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Square of %d is: %d\n", num, square(num));
    } else if (choice == 2) {
        printf("Cube of %d is: %d\n", num, cube(num));
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
int square(int n) {
    return n * n;
}
int cube(int n) {
    return n * n * n;
}
