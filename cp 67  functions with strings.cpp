#include <stdio.h>
#include <string.h>
void reverseString(char *str);

int main() {
    char myString[] = "programming";
    
    printf("Original string: %s\n", myString);
    
    reverseString(myString);
    
    printf("Reversed string: %s\n", myString);
    return 0;
}
void reverseString(char *str) {
    int len = strlen(str);
    int i, j;
    char temp;
    
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
