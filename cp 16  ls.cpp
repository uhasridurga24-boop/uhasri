#include <stdio.h>

int main() {
    int number, i;

    printf("Enter an integer to display its multiplication table: ");
    scanf("%d", &number);

    printf("\n--- Multiplication Table of %d ---\n", number);

    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", number, i, (number * i));
    }

    return 0;
}
