#include <stdio.h>
#include <stdbool.h>
bool isPerfect(int n);

int main() {
    int number = 28;
    
    if (isPerfect(number)) {
        printf("%d is a PERFECT number (1+2+4+7+14 = 28).\n", number);
    } else {
        printf("%d is NOT a perfect number.\n", number);
    }
    return 0;
}
bool isPerfect(int n) {
    int sum_of_divisors = 0;
    int i;
    
    if (n <= 1) return false;
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum_of_divisors += i;
        }
    }
    return (sum_of_divisors == n);
}
