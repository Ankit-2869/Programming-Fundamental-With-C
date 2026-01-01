/* 23. Print different star patterns */
#include <stdio.h>

int main() {
    int i, j;

    /* Rectangle 7x4 */
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 7; j++)
            printf("*");
        printf("\n");
    }

    printf("\n");

    /* Right angle triangle */
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
