//  Problem Statement: Bank Interest Update System
// A bank wants to develop a simple program to update a customer’s account balance using
// assignment operators.
// Write a C program that performs the following operations:
// 1. Takes the customer’s initial account balance as input.
// 2. Adds interest amount (using +=) to the balance.
// 3. Deducts annual maintenance charge (using - =) from the balance.
// 4. Multiplies the balance by a bonus factor (using *=) to reward loyal customers.
#include <stdio.h>

int main() {
    float bal, val;

    printf("Enter Balance: ");
    scanf("%f", &bal);

    printf("Add Interest: ");
    scanf("%f", &val);
    bal += val;
    printf("After Interest: %.2f\n", bal);

    printf("Deduct Charge: ");
    scanf("%f", &val);
    bal -= val;
    printf("After Charge: %.2f\n", bal);

    printf("Multiply Bonus: ");
    scanf("%f", &val);
    bal *= val;
    printf("After Bonus: %.2f\n", bal);

    bal /= 2;
    printf("After Splitting: %.2f\n", bal);

    return 0;
}