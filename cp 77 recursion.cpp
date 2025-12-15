#include <stdio.h>

int sumOfNaturals(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return n + sumOfNaturals(n - 1);
    }
}

int main() {
    int num = 10;
    int result = sumOfNaturals(num);
    
    printf("Sum of first %d natural numbers is: %d\n", num, result);
    return 0;
}
