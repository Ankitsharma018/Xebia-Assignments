//marks of students

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

    printf("\nGrades of students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        
        if (marks[i] >= 75) {
            printf("A Grade\n");
        } 
        else if (marks[i] >= 60 && marks[i] <= 74) {
            printf("B Grade\n");
        } 
        else if (marks[i] >= 40 && marks[i] <= 59) {
            printf("C Grade\n");
        } 
        else {
            printf("D Grade\n");
        }
    }

    return 0;
}
