// 2. Problem Statement: Comparing Two Numbers Without Conditional Statements
// A bank’s internal tool needs to find out which of two account balances is higher, but the program
// cannot use any conditional statements (like if, else, or ternary operators).
// Write a C program that:
// · Takes two account balances as input (float).
// · Uses relational and logical operators to determine:
// o Whether both balances are equal.
// o Whether the first balance is greater than the second.
// o Whether the second balance is greater than the first.
// · Displays the results as 1 (True) or 0 (False) for each condition

#include <stdio.h>

int main() {
    float bal1, bal2;

    printf("Enter first account balance: ");
    scanf("%f", &bal1);
    printf("Enter second account balance: ");
    scanf("%f", &bal2);

    printf("Both balances are equal: %d\n", bal1 == bal2);
    printf("First balance is greater: %d\n", bal1 > bal2);
    printf("Second balance is greater: %d\n", bal2 > bal1);

    return 0;
}