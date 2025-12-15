#include <stdio.h>
#include <string.h>
#define MAX_SIZE 256 
int main() {
    char str[100];
    int frequency[MAX_SIZE] = {0}; 
    int i;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++) {
        frequency[(int)str[i]]++; 
    }

    printf("\nCharacter Frequencies:\n");
    for (i = 0; i < MAX_SIZE; i++) {
        if (frequency[i] > 0) {
            printf("'%c' : %d\n", (char)i, frequency[i]);
        }
    }

    return 0;
}
