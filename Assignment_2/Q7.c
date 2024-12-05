//to check score is even or odd

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

    printf("\nEven or Odd marks:\n");
    for (int i = 0; i < n; i++) {
        if (marks[i] % 2 == 0) {
            printf("Student %d's score %d is Even.\n", i + 1, marks[i]);
        } else {
            printf("Student %d's score %d is Odd.\n", i + 1, marks[i]);
        }
    }

    return 0;
}

