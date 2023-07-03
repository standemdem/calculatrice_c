#include <stdio.h>

double division(double numerator, double denominator) {
    if (denominator != 0) {
        return numerator / denominator;
    } else {
        printf("Error: Division by zero!\n");
        return 0.0;
    }
}