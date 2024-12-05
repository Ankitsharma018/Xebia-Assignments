//Subtraction without Operators

#include <stdio.h>

int subtract(int a, int b) {
    while (b != 0) {
        int borrow = (~a) & b;

        a = a ^ b;
        b = borrow << 1;
    }
    return a;
}

int main() {
    int num1, num2, result;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    result = subtract(num1, num2);

    printf("Result of %d - %d is %d\n", num1, num2, result);

    return 0;
}
