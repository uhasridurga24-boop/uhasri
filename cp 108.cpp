#include <stdio.h>

int isPalindrome(int n) {
    int original_n = n;
    int reversed_n = 0;
    int remainder;
    if (n < 0) {
        return 0;
    } while (n != 0) {
        remainder = n % 10;
        reversed_n = reversed_n * 10 + remainder;
        n /= 10;
    }
    if (original_n == reversed_n) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int num1 = 121;
    int num2 = 12345;
    int num3 = 9009;

    printf("Checking Palindrome Numbers:\n");
    if (isPalindrome(num1)) {
        printf("%d is a palindrome.\n", num1);
    } else {
        printf("%d is NOT a palindrome.\n", num1);
}
    if (isPalindrome(num2)) {
        printf("%d is a palindrome.\n", num2);
    } else {
        printf("%d is NOT a palindrome.\n", num2);
    }
    if (isPalindrome(num3)) {
        printf("%d is a palindrome.\n", num3);
    } else {
        printf("%d is NOT a palindrome.\n", num3);
    }
    
    return 0;
}
