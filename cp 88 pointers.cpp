#include <stdio.h>

void printString(const char *s) {
    while (*s != '\0') {
        printf("%c", *s);
        s++; 
    }
    printf("\n");
}

int main() {
    char str[] = "Hello World"; 
    char *ptr = str; 
    printString(ptr);
    printf("First character: %c\n", *ptr);
    printf("Third character: %c\n", *(ptr + 2));

    return 0;
}
