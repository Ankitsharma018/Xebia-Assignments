//Update Array

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter the marks of each student:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Increase each mark by 5
    for (int i = 0; i < n; i++) {
        marks[i] += 5;
    }

    printf("\nUpdated marks:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
