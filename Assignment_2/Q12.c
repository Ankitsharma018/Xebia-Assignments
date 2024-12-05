//delete elements 

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deleteAtFront(int arr[], int *size) {
    if (*size == 0) {
        printf("Array is empty, cannot delete.\n");
        return;
    }
    for (int i = 0; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void deleteAtEnd(int arr[], int *size) {
    if (*size == 0) {
        printf("Array is empty, cannot delete.\n");
        return;
    }
    (*size)--;
}

void deleteAtPosition(int arr[], int *size, int pos) {
    if (*size == 0) {
        printf("Array is empty, cannot delete.\n");
        return;
    }
    if (pos < 0 || pos >= *size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main() {
    int arr[100]; 
    int size, choice, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    printArray(arr, size);

    printf("Choose an option to delete:\n");
    printf("1. Delete from Front\n");
    printf("2. Delete from End\n");
    printf("3. Delete from any Position\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            deleteAtFront(arr, &size);
            break;
        case 2:
            deleteAtEnd(arr, &size);
            break;
        case 3:
            printf("Enter the position to delete (0-based index): ");
            scanf("%d", &pos);
            deleteAtPosition(arr, &size, pos);
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    printf("Array after deletion:\n");
    printArray(arr, size);

    return 0;
}
