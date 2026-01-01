/* 34. Read 5 integers into an array and print them */
#include <stdio.h>

int main() {
    int a[5], i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Array elements:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}
