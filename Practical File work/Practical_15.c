/* 15. Calculate electricity bill */
#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 1.5;
    else
        bill = units * 2.5;

    printf("Electricity Bill = %.2f", bill);
    return 0;
}
