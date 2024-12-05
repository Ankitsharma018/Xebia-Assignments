#include <stdio.h>
#include <math.h>

void displayMenu() {
    printf("\nSimple Calculator\n");
    printf("-------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Logarithmic value (base 10)\n");
    printf("6. Square root\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Addition
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;

            case 2: // Subtraction
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;

            case 3: // Multiplication
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;

            case 4: // Division
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                }
                break;

            case 5: // Logarithmic value
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 <= 0) {
                    printf("Error: Logarithm of non-positive numbers is undefined.\n");
                } else {
                    result = log10(num1);
                    printf("Logarithm (base 10): %.2lf\n", result);
                }
                break;

            case 6: // Square root
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 < 0) {
                    printf("Error: Square root of a negative number is undefined.\n");
                } else {
                    result = sqrt(num1);
                    printf("Square root: %.2lf\n", result);
                }
                break;

            case 0: // Exit
                printf("Exiting the calculator. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}
