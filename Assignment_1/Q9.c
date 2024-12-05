//Pattern

#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            if (j % 2 == 0)
                printf("1");
            else
                printf("0");
        }

        for (k = 1; k <= 2 * (n - i); k++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            if (j % 2 == 0)
                printf("1");
            else
                printf("0");
        }

        printf("\n");
    }

    return 0;
}
