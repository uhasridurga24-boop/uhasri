#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("The character '%c' is a VOWEL.\n", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("The character '%c' is a CONSONANT.\n", ch);
            } else {
                printf("Input '%c' is not an alphabet.\n", ch);
            }
            break;
    }

    return 0;
}
