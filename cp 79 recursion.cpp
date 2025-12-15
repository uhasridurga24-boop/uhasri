#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1 = 56;
    int num2 = 98;
    int result = gcd(num1, num2);
    
    printf("GCD of %d and %d is: %d\n", num1, num2, result);
    return 0;
}
