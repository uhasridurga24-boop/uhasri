#include <stdio.h>

int main() {
    int n, sum = 0, remainder;
    printf("Enter an integer to find the sum of its digits: ");
    scanf("%d", &n);
    int originalN = n; 
    while (n != 0) {
        remainder = n % 10;          
        sum = sum + remainder;       
        n /= 10;                     
    }

    printf("The sum of digits of %d is: %d\n", originalN, sum);

    return 0;
}
