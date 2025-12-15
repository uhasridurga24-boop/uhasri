#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch_to_remove;
    char modified_str[100]; 
    int i, j = 0;
    printf("Enter the string: ");
    scanf("%[^\n]%*c", str);

    printf("Enter the character to remove: ");
    scanf(" %c", &ch_to_remove);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch_to_remove) {
            modified_str[j] = str[i]; 
            j++;
        }
    }
    modified_str[j] = '\0'; 

    printf("Original string: %s\n", str);
    printf("Modified string: %s\n", modified_str);

    return 0;
}
