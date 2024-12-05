//check marks in array

#include <stdio.h>

int main() {
    int n, found = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter the marks of each student:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("The first student to score 99 is Student %d.\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No student scored 99.\n");
    }

    return 0;
}
