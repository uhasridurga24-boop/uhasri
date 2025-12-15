#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    int i;

    printf("Enter a line of text: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32; 
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } 
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        } 
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } 
        else if (str[i] == ' ') {
            spaces++;
        }
    }

    printf("\nCounts:\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("White Spaces: %d\n", spaces);
    
    return 0;
}
