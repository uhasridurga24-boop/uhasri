#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[3];
    strcpy(employees[0].name, "sirisha");
    employees[0].salary = 60000.00;
    strcpy(employees[1].name, "yamini");
    employees[1].salary = 85500.25;
    strcpy(employees[2].name, "uhasri");
    employees[2].salary = 72000.75;
    printf("--- Employee Details (3 Employees) ---\n");
    for (int i = 0; i < 3; i++) {
        printf("\nDetails for Employee %d:\n", i + 1);
        printf("  Name: %s\n", employees[i].name);
        printf("  Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}
