#include <stdio.h>
long long power(int base, int exp);

int main() {
    int b = 3, e = 4;
    long long result = power(b, e);
    
    printf("%d raised to the power %d is: %lld\n", b, e, result);
    return 0;
}
long long power(int base, int exp) {
    long long res = 1;
    int i;
    
    for (i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}
