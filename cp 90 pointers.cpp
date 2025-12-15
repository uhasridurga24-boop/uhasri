#include <stdio.h>

int main() {
    int x = 50;
    int *ptr1;  
    int **ptr2;  

    ptr1 = &x; 
    ptr2 = &ptr1; 

    printf("Value of x: %d\n\n", x);
    printf("Value of x using *ptr1: %d\n", *ptr1);
    printf("Value of x using **ptr2: %d\n\n", **ptr2);
    **ptr2 = 100;

    printf("New value of x: %d\n", x);

    return 0;
}
