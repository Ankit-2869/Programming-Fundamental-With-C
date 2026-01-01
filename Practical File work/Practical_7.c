/* 7. Compare two account balances using logical operators */
#include <stdio.h>

int main() {
    float a, b;

    printf("Enter two balances: ");
    scanf("%f %f", &a, &b);

    printf("Equal: %d\n", a == b);
    printf("First Greater: %d\n", a > b);
    printf("Second Greater: %d\n", a < b);

    return 0;
}
