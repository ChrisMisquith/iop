#include <stdio.h>

int main() {
    int arr[] = {29, 10, 14, 37, 13}; // Initialize the array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int i, j, minIndex, temp;

    printf("Original array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Selection sort algorithm
    for (i = 0; i < n - 1; i++) {
        minIndex = i; // Assume the current index is the minimum
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update the index of the minimum element
            }
        }
        // Swap the found minimum element with the first element
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
