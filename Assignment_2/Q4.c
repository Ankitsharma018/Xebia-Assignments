//Count and name the student in array

#include <stdio.h>

int main() {
    int n, count = 0, firstIndex = -1;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter the marks of each student:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nStudents who scored 99:\n");
    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            if (firstIndex == -1) {
                firstIndex = i;  // Record the first occurrence
            }
            printf("Student %d\n", i + 1);
            count++;
        }
    }

    if (count > 0) {
        printf("The first student to score 99 is Student %d.\n", firstIndex + 1);
        printf("Total number of students who scored 99: %d\n", count);
    } else {
        printf("No student scored 99.\n");
    }

    return 0;
}
