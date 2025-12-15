#include <stdio.h>

int main() {
    const char *names[] = {
        "ram",
        "lakshman",
        "janaki",
        "hanuman"
    };

    int i;
    int size = sizeof(names) / sizeof(names[0]);

    printf("List of names:\n");

    for (i = 0; i < size; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }
    printf("\nFirst letter of the second name: %c\n", *names[1]);

    return 0;
}
