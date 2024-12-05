//find peek element not smaller than neighbours

#include <stdio.h>

int findPeak(int arr[], int n) {
    // If the array has only one element, it's a peak
    if (n == 1) {
        return 0;
    }

    // Check the first element
    if (arr[0] >= arr[1]) {
        return 0;
    }

    // Check the last element
    if (arr[n-1] >= arr[n-2]) {
        return n-1;
    }

    // Check for peak in the middle of the array
    for (int i = 1; i < n-1; i++) {
        if (arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) {
            return i;  // Return the index of the peak element
        }
    }

    return -1; // This should never be reached for valid input
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peakIndex = findPeak(arr, n);

    if (peakIndex != -1) {
        printf("Peak element is: %d at index %d\n", arr[peakIndex], peakIndex);
    } else {
        printf("No peak element found.\n");
    }

    return 0;
}
