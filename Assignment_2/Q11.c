//insert elements at any position

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertAtFront(int arr[], int *size, int value) {
    for (int i = *size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    (*size)++;
}

void insertAtEnd(int arr[], int *size, int value) {
    arr[*size] = value;
    (*size)++;
}

void insertAtPosition(int arr[], int *size, int value, int pos) {
    if (pos < 0 || pos > *size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*size)++;
}

int main() {
    int arr[100]; 
    int size, choice, value, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    printArray(arr, size);

    printf("Choose an option to insert:\n");
    printf("1. Insert at Front\n");
    printf("2. Insert at End\n");
    printf("3. Insert at any Position\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the value to insert at the front: ");
            scanf("%d", &value);
            insertAtFront(arr, &size, value);
            break;
        case 2:
            printf("Enter the value to insert at the end: ");
            scanf("%d", &value);
            insertAtEnd(arr, &size, value);
            break;
        case 3:
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            printf("Enter the position (0-based index): ");
            scanf("%d", &pos);
            insertAtPosition(arr, &size, value, pos);
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    printf("Array after insertion:\n");
    printArray(arr, size);

    return 0;
}
