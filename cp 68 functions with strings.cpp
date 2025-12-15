#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int countVowels(const char *str);

int main() {
    char myString[] = "Hello World";
    
    int vowels = countVowels(myString); 
    
    printf("The string is: \"%s\"\n", myString);
    printf("Number of vowels: %d\n", vowels);
    return 0;
}
int countVowels(const char *str) {
    int count = 0;
    int i;
    char ch;
    
    for (i = 0; str[i] != '\0'; i++) {
        ch = toupper(str[i]); 
        
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}
