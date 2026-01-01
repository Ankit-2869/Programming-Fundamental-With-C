// 1. Problem Statement: Salary Calculation System
// A company wants to automate its employee salary calculation process using a C program.
// The program should take the following inputs from the user:
// ● Employee name (string)
// ● Basic salary (float)
// Using arithmetic operators, calculate and display the following:
// 1. House Rent Allowance (HRA) = 20% of basic salary
// 2. Dearness Allowance (DA) = 10% of basic salary
// 3. Gross Salary = Basic Salary + HRA + DA
// 4. Income Tax = 5% of Gross Salary
// 5. Net Salary = Gross Salary - Income Tax
// Finally, display the employee name, basic salary, HRA, DA, Gross Salary, Income Tax, and Net
// Salary.

#include <stdio.h>

int main() {
    char name[50];
    float basic, hra, da, gross, tax, net;

    printf("Enter Employee Name: ");
    scanf("%s", name);
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = 0.20 * basic;
    da = 0.10 * basic;
    gross = basic + hra + da;
    tax = 0.05 * gross;
    net = gross - tax;

    printf("\n--- Salary Slip ---\n");
    printf("Name: %s\n", name);
    printf("Basic Salary: %.2f\n", basic);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross);
    printf("Income Tax: %.2f\n", tax);
    printf("Net Salary: %.2f\n", net);

    return 0;
}