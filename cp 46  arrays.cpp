#include <stdio.h>

int main() {
    int arr[] = {1, 2, 8, 3, 2, 2, 5, 1};
    int size = 8;
    int frequency[size]; 
    int i, j;
    int visited = -1;
    for (i = 0; i < size; i++) {
        frequency[i] = 0;
    }

    for (i = 0; i < size; i++) {
        int count = 1;
        if (frequency[i] == visited) {
            continue;
        }

        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                frequency[j] = visited; 
            }
        }

        if (frequency[i] != visited) {
            frequency[i] = count; 
        }
    }

    printf("Element Frequencies:\n");
    for (i = 0; i < size; i++) {
        if (frequency[i] != visited) {
            printf("Element %d: %d times\n", arr[i], frequency[i]);
        }
    }
    return 0;
}
