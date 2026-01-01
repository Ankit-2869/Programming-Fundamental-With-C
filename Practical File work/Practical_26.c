/* 26. Find factorial of a number using function */
#include <stdio.h>

int fact(int n) {
    int f = 1, i;
    for (i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factorial = %d", fact(n));
    return 0;
}
