#include <stdio.h>
#include <string.h>
union Data {
    int i;
    float f;
    char str[20];
};


int main() {
    union Data data;
    data.i = 10;
    printf("After storing integer:\n");
    printf("  data.i: %d\n", data.i);
    printf("  data.f (Garbage): %f\n", data.f); 
    printf("  Size of union: %zu bytes (Same as its largest member: str[20])\n", sizeof(data));
    data.f = 220.50;
    printf("\nAfter storing float:\n");
    printf("  data.f: %.2f\n", data.f);
    printf("  data.i (Garbage/Corrupted): %d\n", data.i); 
    strcpy(data.str, "Hello Union");
    printf("\nAfter storing string:\n");
    printf("  data.str: %s\n", data.str);
    printf("  data.f (Garbage/Corrupted): %f\n", data.f); 
    return 0;
}
