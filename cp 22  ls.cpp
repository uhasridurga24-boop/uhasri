#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int originalN = n; 
    if (n == 0) {
        count = 1;
    } else {
        if (n < 0) {
            n = -n;
        }
        while (n > 0) {
            n /= 10; 
            count++;   
        }
    }

    printf("The number of digits in %d is: %d\n", originalN, count);

    return 0;
}
