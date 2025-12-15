#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;
    printf("Enter an integer to reverse: ");
    scanf("%d", &n);
    int originalN = n; 
    while (n != 0) {
        remainder = n % 10;          
        reversed = reversed * 10 + remainder; 
        n /= 10;                     
    }

    printf("Original Number: %d\n", originalN);
    printf("Reversed Number: %d\n", reversed);

    return 0;
}
