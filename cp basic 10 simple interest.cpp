#include <stdio.h>
int main() {
    float principal, rate, time, simple_interest;
    printf("Enter the Principal amount (P): ");
    scanf("%f", &principal);
    printf("Enter the Annual Rate of interest (R in %%): ");
    scanf("%f", &rate);
    printf("Enter the Time period (T in years): ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100.0;
    printf("\nSimple Interest (SI) = %.2f\n", simple_interest);

    return 0;
}
