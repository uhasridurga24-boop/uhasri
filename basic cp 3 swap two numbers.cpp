#include <stdio.h>

int main() {
    int x, y, temp;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    temp = x;
    x = y;
    y = temp;
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}

