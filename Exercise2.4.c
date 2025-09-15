#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 15;
    int result1, result2, result3;

    // Relational expressions
    result1 = (a < b) && (b < c);     // Logical AND
    result2 = (a > b) || (b < c);     // Logical OR
    result3 = !(a == b);              // Logical NOT

    // Output results
    printf("Expression 1: (a < b) && (b < c) = %d\n", result1);
    printf("Expression 2: (a > b) || (b < c) = %d\n", result2);
    printf("Expression 3: !(a == b) = %d\n", result3);

    return 0;
}