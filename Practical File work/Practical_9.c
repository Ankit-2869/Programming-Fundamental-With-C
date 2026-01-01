/* 9. Apply interest, bonus, charges using compound assignment operators */
#include <stdio.h>

int main() {
    float balance;

    printf("Enter initial balance: ");
    scanf("%f", &balance);

    balance += balance * 0.10;   // interest
    printf("After interest: %.2f\n", balance);

    balance += 500;              // bonus
    printf("After bonus: %.2f\n", balance);

    balance -= 200;              // charges
    printf("After charges: %.2f\n", balance);

    return 0;
}
