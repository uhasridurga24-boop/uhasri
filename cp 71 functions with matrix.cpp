#include <stdio.h>
int calculateArraySum(int arr[], int size);

int main() {
    int data[] = {10, 25, 5, 40, 15};
    int size = sizeof(data) / sizeof(data[0]); 
    int total = calculateArraySum(data, size); 
    
    printf("Array elements: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\nTotal sum of array elements: %d\n", total);
    return 0;
}
int calculateArraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
