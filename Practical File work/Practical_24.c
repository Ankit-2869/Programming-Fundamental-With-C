/* 24. Display multiplication table using while loop */
#include <stdio.h>

int main() {
    int choice, n, i;

    while (1) {
        printf("\n1. Print Table\n0. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 0)
            break;

        printf("Enter number: ");
        scanf("%d", &n);

        i = 1;
        while (i <= 10) {
            printf("%d x %d = %d\n", n, i, n * i);
            i++;
        }
    }

    return 0;
}
