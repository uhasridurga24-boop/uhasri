#include <stdio.h>

int main() {
    int N, i;
    printf("Enter the number of natural numbers to print: ");
    scanf("%d", &N);
    printf("The first %d natural numbers are:\n", N);
    for (i = 1; i <= N; i++) {
        printf("%d ", i);
    }
    
    printf("\n");
    return 0;
}
