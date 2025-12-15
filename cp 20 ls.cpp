#include <stdio.h>

int main() {
    int N, i;
    int first = 0, second = 1, nextTerm; 
    printf("Enter the number of terms for the Fibonacci Series: ");
    scanf("%d", &N);
    printf("Fibonacci Series (first %d terms):\n", N);
    for (i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%d ", first);
            continue;
        }
        if (i == 2) {
            printf("%d ", second);
            continue;
        }
        nextTerm = first + second;
        printf("%d ", nextTerm);
        first = second;
        second = nextTerm;
    }

    printf("\n");
    return 0;
}
