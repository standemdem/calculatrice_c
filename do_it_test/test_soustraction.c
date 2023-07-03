#include <stdio.h>
#include "../operations.h"
// Test function for the soustraction() function
void test_soustraction() {
    // Test case 1
    int result = soustraction(5, 3);
    int expected = 2;
    if (result == expected) {
        printf("Test case 1 passed!\n");
    } else {
        printf("Test case 1 failed. Expected: %d, Got: %d\n", expected, result);
    }

    // Test case 2
    result = soustraction(10, -4);
    expected = 14;
    if (result == expected) {
        printf("Test case 2 passed!\n");
    } else {
        printf("Test case 2 failed. Expected: %d, Got: %d\n", expected, result);
    }

    // Test case 3
    result = soustraction(0, 5);
    expected = -5;
    if (result == expected) {
        printf("Test case 3 passed!\n");
    } else {
        printf("Test case 3 failed. Expected: %d, Got: %d\n", expected, result);
    }

    // Add more test cases as needed
}
