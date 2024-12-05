//Pascal'c Triangle

#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int combination(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Print spaces for alignment
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print values in Pascal's Triangle row
        for (int k = 0; k <= i; k++) {
            printf("%d ", combination(i, k));
        }

        printf("\n");
    }

    return 0;
}
