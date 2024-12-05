//max or min score in array

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];
    int max, min;

    printf("Enter the marks of each student:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Initialize max and min with the first element of the array
    max = min = marks[0];

    // Find the maximum and minimum marks
    for (int i = 1; i < n; i++) {
        if (marks[i] > max) {
            max = marks[i]; // Update max
        }
        if (marks[i] < min) {
            min = marks[i]; // Update min
        }
    }

    printf("\nThe maximum score is: %d\n", max);
    printf("The minimum score is: %d\n", min);

    return 0;
}
