#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-7) to find the corresponding day of the week: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Day %d is Sunday.\n", day);
            break;
        case 2:
            printf("Day %d is Monday.\n", day);
            break;
        case 3:
            printf("Day %d is Tuesday.\n", day);
            break;
        case 4:
            printf("Day %d is Wednesday.\n", day);
            break;
        case 5:
            printf("Day %d is Thursday.\n", day);
            break;
        case 6:
            printf("Day %d is Friday.\n", day);
            break;
        case 7:
            printf("Day %d is Saturday.\n", day);
            break;
        default:
            printf("Error: Invalid number. Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}
