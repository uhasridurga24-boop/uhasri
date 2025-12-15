#include <stdio.h>
int findLargest(int arr[], int size);

int main() {
    int numbers[] = {88, 12, 95, 30, 47};
    int size = sizeof(numbers) / sizeof(numbers[0]); 
    int max_val = findLargest(numbers, size);
    
    printf("The largest element in the array is: %d\n", max_val);
    return 0;
}
int findLargest(int arr[], int size) {
    int max = arr[0]; 
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
}
