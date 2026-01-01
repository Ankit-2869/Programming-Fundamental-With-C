/* 32. Perform arithmetic operations using call by reference */
#include <stdio.h>

void calculate(int a, int b, int *add, int *sub, int *mul, float *div) {
    *add = a + b;
    *sub = a - b;
    *mul = a * b;
    *div = (float)a / b;
}

int main() {
    int a, b, add, sub, mul;
    float div;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    calculate(a, b, &add, &sub, &mul, &div);

    printf("Addition = %d\n", add);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mul);
    printf("Division = %.2f", div);

    return 0;
}
