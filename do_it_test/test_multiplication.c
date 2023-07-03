#include <stdio.h>
#include "../operations.h"
// Test function for the multiplication() function
void test_multiplication() {
    // Test case 1
    int result = multiplication(2, 3);
    int expected = 6;
    if (result == expected) {
        printf("Test case 1 passed!\n");
    } else {
        printf("Test case 1 failed. Expected: %d, Got: %d\n", expected, result);
    }

    // Test case 2
    result = multiplication(-4, 7);
    expected = -28;
    if (result == expected) {
        printf("Test case 2 passed!\n");
    } else {
        printf("Test case 2 failed. Expected: %d, Got: %d\n", expected, result);
    }

    // Test case 3
    result = multiplication(0, 5);
    expected = 0;
    if (result == expected) {
        printf("Test case 3 passed!\n");
    } else {
        printf("Test case 3 failed. Expected: %d, Got: %d\n", expected, result);
    }
}