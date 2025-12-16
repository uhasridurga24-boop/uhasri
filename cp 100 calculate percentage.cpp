#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int rollno;
    float marks[6];
    float percentage;
};
float calculatePercentage(float marks[]) {
    float total_marks = 0;
    for (int i = 0; i < 6; i++) {
        total_marks += marks[i];
    }
    return (total_marks / 600.0) * 100.0;
}

int main() {
    struct Student students[3];
    strcpy(students[0].name, "Geeta");
    students[0].rollno = 201;
    float marks1[] = {80, 75, 90, 85, 78, 92};
    memcpy(students[0].marks, marks1, sizeof(marks1));
    strcpy(students[1].name, "Harish");
    students[1].rollno = 202;
    float marks2[] = {65, 70, 60, 75, 80, 72};
    memcpy(students[1].marks, marks2, sizeof(marks2));
    strcpy(students[2].name, "Isha");
    students[2].rollno = 203;
    float marks3[] = {95, 98, 92, 99, 90, 94};
    memcpy(students[2].marks, marks3, sizeof(marks3));
    for (int i = 0; i < 3; i++) {
        students[i].percentage = calculatePercentage(students[i].marks);
    }
    printf("===============================================================\n");
    printf("| %-10s | %-8s | %-10s | %-12s |\n", "ROLL NO", "NAME", "TOTAL MARKS", "PERCENTAGE");
    printf("===============================================================\n");

    for (int i = 0; i < 3; i++) {
        float total = 0;
        for (int j = 0; j < 6; j++) {
            total += students[i].marks[j];
        }
        printf("| %-10d | %-8s | %-10.1f | %-12.2f |\n", 
               students[i].rollno, 
               students[i].name, 
               total, 
               students[i].percentage);
    }
    printf("===============================================================\n");

    return 0;
}
