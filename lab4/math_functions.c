#include <stdio.h>
#include <math.h>


// MATH.H IMPLEMENTATION
void ceiling_function_math(double *x) { 
    *x = ceil(*x); // ceil returns double need to explicitly state its a float
    printf("Math.h ceiling: %.2f\n", *x);
}

void floor_function_math(double *x) {
    *x = floor(*x);
    printf("Math.h floor: %.2f\n", *x);
}

// MANUAL IMPLEMENTATION
void ceiling_function_manual(double *x) {
    int single_digit = (int)*x;
    double remainder = *x - single_digit;

    if (remainder > 0) {
        *x = single_digit + 1;  // positive fraction: round up
    } else if (remainder < 0) {
        *x = single_digit;      // negative fraction: truncation is already the ceiling
    } else {
        *x = single_digit;      // exact integer: no change
    }
    printf("Manual ceiling: %.2f\n", *x);
}

void floor_function_manual(double *x) {
    int single_digit = (int)*x;
    double remainder = *x - single_digit;

    if (remainder > 0) {
        *x = single_digit;      // positive fraction: drop decimal
    } else if (remainder < 0) {
        *x = single_digit - 1;  // negative fraction: go one lower
    } else {
        *x = single_digit;      // exact integer: no change
    }
    printf("Manual floor: %.2f\n", *x);
}


int main() {
    double a;

    printf("Positive: 4.6345\n");
    a = 4.6345; ceiling_function_math(&a);
    a = 4.6345; floor_function_math(&a);
    a = 4.6345; ceiling_function_manual(&a);
    a = 4.6345; floor_function_manual(&a);

    printf("\nNegative: -4.6345\n");
    a = -4.6345; ceiling_function_math(&a);
    a = -4.6345; floor_function_math(&a);
    a = -4.6345; ceiling_function_manual(&a);
    a = -4.6345; floor_function_manual(&a);

    printf("\nWhole number: 3.0\n");
    a = 3.0; ceiling_function_math(&a);
    a = 3.0; floor_function_math(&a);
    a = 3.0; ceiling_function_manual(&a);
    a = 3.0; floor_function_manual(&a);

    printf("\nNegative whole number: -3.0\n");
    a = -3.0; ceiling_function_math(&a);
    a = -3.0; floor_function_math(&a);
    a = -3.0; ceiling_function_manual(&a);
    a = -3.0; floor_function_manual(&a);
    return 0;
}




