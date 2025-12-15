#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int i;
    int position = -1; 

    printf("Enter the string: ");
    scanf("%[^\n]%*c", str);
    
    printf("Enter the character to find: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            position = i; 
            break;       
        }
    }

    if (position != -1) {
        printf("The character '%c' was found at index %d (position %d).\n", ch, position, position + 1);
    } else {
        printf("The character '%c' was not found in the string.\n", ch);
    }

    return 0;
}
