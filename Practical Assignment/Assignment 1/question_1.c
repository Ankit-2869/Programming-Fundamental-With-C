// 1) Write a C program to declare variables of type int, float, char, and double. Initialize them with values and print their values and sizes using sizeof operator
#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'Z';
    double d = 100.123;

    printf("int value: %d, size: %lu\n", a, sizeof(a));
    printf("float value: %f, size: %lu\n", b, sizeof(b));
    printf("char value: %c, size: %lu\n", c, sizeof(c));
    printf("double value: %lf, size: %lu\n", d, sizeof(d));

    return 0;
}