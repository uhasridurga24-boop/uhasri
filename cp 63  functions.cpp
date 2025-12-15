#include <stdio.h>
int findMax(int a, int b, int c);

int main() {
    int n1 = 40, n2 = 70, n3 = 50;
    int max = findMax(n1, n2, n3);
    
    printf("The largest number among %d, %d, and %d is: %d\n", n1, n2, n3, max);
    return 0;
}
int findMax(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}
