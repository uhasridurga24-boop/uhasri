#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    float salary;
};

int main() {
    struct Employee emp1;
    strcpy(emp1.name, "Ram");
    emp1.salary = 75000.50;
    printf("--- Employee Details ---\n");
    printf("Employee Name: %s\n", emp1.name);
    printf("Employee Salary: %.2f\n", emp1.salary);

    return 0;
}
