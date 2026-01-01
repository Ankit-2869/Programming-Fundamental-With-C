/* 37. Search for a number in an array using linear search */
#include <stdio.h>

int main() {
    int a[50], n, key, i, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}
