/* 21. Input daily walking distance for 30 days and find total distance */
#include <stdio.h>

int main() {
    int i;
    float km, total = 0;

    for (i = 1; i <= 30; i++) {
        printf("Enter distance for day %d (km): ", i);
        scanf("%f", &km);
        total += km;
    }

    printf("Total distance walked = %.2f km", total);
    return 0;
}
