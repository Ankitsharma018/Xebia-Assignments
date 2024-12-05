//Swapping Integer

#include <stdio.h>

// Method 1: Using a temporary variable
void swap_with_temp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Method 2: Using arithmetic operations
void swap_with_arithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// Method 3: Using bitwise XOR
void swap_with_xor(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

// Method 4: Using pointers
void swap_with_pointers(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int a, b;

    // Accepting two integer numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Original values: a = %d, b = %d\n", a, b);

    // Call Method 1
    swap_with_temp(&a, &b);
    printf("After swap_with_temp: a = %d, b = %d\n", a, b);

    // Reset values for next method
    swap_with_temp(&a, &b); // Swap back to original

    // Call Method 2
    swap_with_arithmetic(&a, &b);
    printf("After swap_with_arithmetic: a = %d, b = %d\n", a, b);

    // Reset values for next method
    swap_with_arithmetic(&a, &b); // Swap back to original

    // Call Method 3
    swap_with_xor(&a, &b);
    printf("After swap_with_xor: a = %d, b = %d\n", a, b);

    // Reset values for next method
    swap_with_xor(&a, &b); // Swap back to original

    // Call Method 4
    swap_with_pointers(&a, &b);
    printf("After swap_with_pointers: a = %d, b = %d\n", a, b);

    return 0;
}
