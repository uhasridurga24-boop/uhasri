#include <stdio.h>

int main() {
    int arr[10];
    int size = 10;
    int sum = 0;
    int i;
    float average;

    printf("Enter 10 integer elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }

    average = (float)sum / size; 

    printf("\nSum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);
    return 0;
}
