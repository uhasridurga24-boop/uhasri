#include <stdio.h>
#include <math.h> 
int countDigits(int num) {
    int count = 0;
    int temp = num; 
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    return count;
}

int main() {
    int n, remainder, originalN;
    long long result = 0; 
    int digits;
    printf("Enter an integer to check for Armstrong: ");
    scanf("%d", &n);
    originalN = n; 
    digits = countDigits(originalN);
    
    int temp = originalN;
    while (temp != 0) {
        remainder = temp % 10; 
        result += round(pow(remainder, digits)); 
        temp /= 10;
    }
    if (result == originalN) {
        printf("%d is an ARMSTRONG number.\n", originalN);
    } else {
        printf("%d is NOT an ARMSTRONG number.\n", originalN);
    }

    return 0;
}
