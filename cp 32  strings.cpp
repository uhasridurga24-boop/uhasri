#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int len1 = 0, len2 = 0;
    printf("Enter the first string: ");
    scanf("%[^\n]%*c", str1); 
    printf("Enter the second string: ");
    scanf("%[^\n]", str2);
    while (str1[len1] != '\0') {
        len1++;
    }
    while (str2[len2] != '\0') {
        str1[len1 + len2] = str2[len2];
        len2++;
    }
    str1[len1 + len2] = '\0'; 

    printf("Concatenated string: %s\n", str1);
    return 0;
}
