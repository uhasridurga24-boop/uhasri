#include <stdio.h>

long long power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    else {
        return base * power(base, exp - 1);
    }
}

int main() {
    int base = 4;
    int exp = 3;
    long long result = power(base, exp);
    
    printf("%d raised to the power %d is: %lld\n", base, exp, result);
    return 0;
}
