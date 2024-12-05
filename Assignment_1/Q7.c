//Binary to decimal and Decimal to binary

#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long n);
long long decimalToBinary(int n);

int main() {
    int choice;
    printf("Choose an option:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long binary;
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        printf("Decimal: %d\n", binaryToDecimal(binary));
    } 
    else if (choice == 2) {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        printf("Binary: %lld\n", decimalToBinary(decimal));
    } 
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}

int binaryToDecimal(long long n) {
    int decimal = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}

long long decimalToBinary(int n) {
    long long binary = 0;
    int remainder, i = 1;
    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}
