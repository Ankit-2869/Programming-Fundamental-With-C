// 1. Write a C program that uses a user-defined function to swap two numbers using call by reference. The function should take the addresses of the variables as parameters and modify their values.
#include <stdio.h>

void swap(int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    swap(&x, &y);

    printf("Swapped: %d %d\n", x, y);
    return 0;
}