// 2. Write a C program to find the maximum of two numbers using a function that accepts pointer arguments.
#include <stdio.h>

int getMax(int *a, int *b) {
    if(*a > *b) {
        return *a;
    } else {
        return *b;
    }
}

int main() {
    int x, y, m;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    m = getMax(&x, &y);

    printf("Max is: %d\n", m);
    return 0;
}