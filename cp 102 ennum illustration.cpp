#include <stdio.h>
enum WeekDay {
    SUNDAY,      
    MONDAY,      
    TUESDAY = 5, 
    WEDNESDAY,   
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum WeekDay today;
    today = WEDNESDAY;

    printf("--- Enumeration Example ---\n");
    printf("The constant value for WEDNESDAY is: %d\n", WEDNESDAY);
    printf("The constant value for SUNDAY is: %d\n", SUNDAY);
    printf("The constant value for MONDAY is: %d\n", MONDAY);
    printf("The constant value for SATURDAY is: %d\n", SATURDAY); 
    printf("\nChecking the day...\n");
    switch (today) {
        case MONDAY:
        case TUESDAY:
        case WEDNESDAY:
        case THURSDAY:
        case FRIDAY:
            printf("It is a weekday (value: %d).\n", today);
            break;
        case SATURDAY:
        case SUNDAY:
            printf("It is a weekend day (value: %d).\n", today);
            break;
    }

    return 0;
}
