#include <stdio.h>

int main() {
    char ch, converted_ch;
    printf("Enter an uppercase letter (A-Z): ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        switch (ch) {
            default:
                converted_ch = ch + 32; 
                printf("The lowercase equivalent is: %c\n", converted_ch);
                break;
        }
    } else {
        printf("Invalid input. Please enter a single uppercase letter.\n");
    }

    return 0;
}
