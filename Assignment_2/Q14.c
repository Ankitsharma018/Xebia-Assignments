//print duplicates in given array

#include <stdio.h>
#include <stdbool.h>

void printDuplicates(int arr[], int n) {
    int freq[100001] = {0}; 
    bool foundDuplicate = false;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    printf("Duplicates in the array are: ");
    for (int i = 0; i < 100001; i++) {
        if (freq[i] > 1) {
            printf("%d ", i);
            foundDuplicate = true;
        }
    }

    if (!foundDuplicate) {
        printf("-1");
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

    printDuplicates(arr, n);

    return 0;
}
