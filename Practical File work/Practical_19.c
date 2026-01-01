/* 19. Input daily electricity usage for 7 days and calculate total weekly consumption */
#include <stdio.h>

int main() {
    int i;
    float units, total = 0;

    for (i = 1; i <= 7; i++) {
        printf("Enter units for day %d: ", i);
        scanf("%f", &units);
        total += units;
    }

    printf("Total weekly consumption = %.2f units", total);
    return 0;
}
