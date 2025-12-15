#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[100];
    int i, j;
    bool isPalindrome = true;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    i = 0;
    j = strlen(str) - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome) {
        printf("The string \"%s\" IS a palindrome.\n", str);
    } else {
        printf("The string \"%s\" IS NOT a palindrome.\n", str);
    }

    return 0;
}
