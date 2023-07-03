#include <stdio.h>
#include "../operations.h"
// Test function for the division() function
void test_division() {
    // Test case 1
    double result = division(10.0, 2.0);
    double expected = 5.0;
    if (result == expected) {
        printf("Test case 1 passed!\n");
    } else {
        printf("Test case 1 failed. Expected: %lf, Got: %lf\n", expected, result);
    }

    // Test case 2
    result = division(-15.0, 3.0);
    expected = -5.0;
    if (result == expected) {
        printf("Test case 2 passed!\n");
    } else {
        printf("Test case 2 failed. Expected: %lf, Got: %lf\n", expected, result);
    }

    // Test case 3
    result = division(0.0, 5.0);
    expected = 0.0;
    if (result == expected) {
        printf("Test case 3 passed!\n");
    } else {
        printf("Test case 3 failed. Expected: %lf, Got: %lf\n", expected, result);
    }

    // Test case 4 - Division by zero
    result = division(10.0, 0.0);
    expected = 0.0; // As division by zero is not possible, it returns 0.0
    if (result == expected) {
        printf("Test case 4 passed!\n");
    } else {
        printf("Test case 4 failed. Expected: %lf, Got: %lf\n", expected, result);
    }
}
