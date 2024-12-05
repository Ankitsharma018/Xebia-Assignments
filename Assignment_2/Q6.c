//average of score in array

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, average;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter the marks of each student:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];  // Add each mark to the sum
    }

    average = sum / n;  // Calculate the average

    printf("\nThe average score is: %.2f\n", average);

    return 0;
}
