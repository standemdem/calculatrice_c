#include <stdio.h>
#include "../operations.h"
void test_addition() {
    // Test case 1
    int result = addition(2, 3);
    int expected = 5;
    if (result == expected) {
        printf("Test case 1 passed!\n");
    } else {
        printf("Test case 1 failed. Expected: %d, Got: %d\n", expected, result);
    }

    // Test case 2
    result = addition(-4, 7);
    expected = 3;
    if (result == expected) {
        printf("Test case 2 passed!\n");
    } else {
        printf("Test case 2 failed. Expected: %d, Got: %d\n", expected, result);
    }

    // Test case 3
    result = addition(0, 0);
    expected = 0;
    if (result == expected) {
        printf("Test case 3 passed!\n");
    } else {
        printf("Test case 3 failed. Expected: %d, Got: %d\n", expected, result);
    }
}