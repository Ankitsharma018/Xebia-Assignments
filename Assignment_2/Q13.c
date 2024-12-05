//rotate array clockwise one time

#include <stdio.h>

void cyclicRotateClockwise(int arr[], int size) {
    if (size <= 1) {
        return; 
    }

    int last = arr[size - 1]; 
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[0] = last; 
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    printArray(arr, n);

    cyclicRotateClockwise(arr, n);

    printf("Array after cyclic rotation:\n");
    printArray(arr, n);

    return 0;
}
