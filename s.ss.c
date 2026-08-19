#include <stdio.h>
int i;
// Function to perform linear search
// Returns the index if found, otherwise returns -1
int linearSearch(int arr[], int size, int target) {
    for ( i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}

int main() {
    int data[] = {12, 45, 7, 23, 9, 56, 31};
    int n = sizeof(data) / sizeof(data[0]);
    int target;

    printf("Enter the number to search for: ");
    scanf("%d", &target);

    int result = linearSearch(data, n, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
