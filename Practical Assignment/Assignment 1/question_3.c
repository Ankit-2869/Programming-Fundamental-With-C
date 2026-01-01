//3) Write a C program to demonstrate the difference between ++x (pre-increment) and x++ (post-increment) in an arithmetic expression
#include <stdio.h>

int main() {
    int x = 10, a;

    a = ++x;
    printf("After Pre-increment (++x):\n");
    printf("x = %d, a = %d\n", x, a);

    x = 10;
    a = x++;
    printf("After Post-increment (x++):\n");
    printf("x = %d, a = %d\n", x, a);

    return 0;
}