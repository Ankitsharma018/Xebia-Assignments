//sum of scores in array

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter the marks of each student:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];  // Add each mark to the sum
    }

    printf("\nThe sum of all scores is: %d\n", sum);

    return 0;
}
