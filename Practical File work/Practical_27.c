/* 27. Find square of a number using function */
#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Square = %d", square(n));
    return 0;
}
