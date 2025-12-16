#include <stdio.h>
#include <string.h>
struct Address {
    char h_no[10];
    char city[50];
    int pin;
};
struct Student {
    char name[50];
    int rollno;
    float marks[6]; 
    struct Address addr; 
};

int main() {
    struct Student student1;
    int i;
    float total_marks = 0;
    strcpy(student1.name, "Bob Williams");
    student1.rollno = 101;
    student1.marks[0] = 85.5;
    student1.marks[1] = 90.0;
    student1.marks[2] = 78.5;
    student1.marks[3] = 92.0;
    student1.marks[4] = 88.5;
    student1.marks[5] = 80.0;
    strcpy(student1.addr.h_no, "A-45");
    strcpy(student1.addr.city, "Hyderabad");
    student1.addr.pin = 500081;
    printf("--- Student Details ---\n");
    printf("Name: %s\n", student1.name);
    printf("Roll No: %d\n", student1.rollno);

    printf("Marks in 6 Subjects:\n");
    for (i = 0; i < 6; i++) {
        printf("  Subject %d: %.1f\n", i + 1, student1.marks[i]);
        total_marks += student1.marks[i];
    }
    printf("Total Marks: %.1f\n", total_marks);

    printf("Address:\n");
    printf("  H. No: %s\n", student1.addr.h_no);
    printf("  City: %s\n", student1.addr.city);
    printf("  Pin: %d\n", student1.addr.pin);

    return 0;
}
