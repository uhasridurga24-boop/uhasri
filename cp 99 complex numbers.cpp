#include <stdio.h>
struct Complex {
    float real;
    float imag;
};

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}
struct Complex subtractComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;
    return result;
}
void printComplex(struct Complex num, char *operation) {
    printf("%s: %.2f + %.2fi\n", operation, num.real, num.imag);
}

int main() {
    struct Complex c1 = {3.5, 2.0}; 
    struct Complex c2 = {1.2, 4.3}; 
    struct Complex sum, difference;

    printf("Complex Number 1 (C1): %.2f + %.2fi\n", c1.real, c1.imag);
    printf("Complex Number 2 (C2): %.2f + %.2fi\n", c2.real, c2.imag);
    sum = addComplex(c1, c2);
    printComplex(sum, "Sum (C1 + C2)"); 
    difference = subtractComplex(c1, c2);
    printComplex(difference, "Difference (C1 - C2)"); 

    return 0;
}
