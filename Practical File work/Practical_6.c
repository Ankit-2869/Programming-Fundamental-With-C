/* 6. Calculate employee salary with HRA, DA, tax */
#include <stdio.h>

int main() {
    float basic, hra, da, gross, tax, net;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    hra = 0.20 * basic;
    da = 0.10 * basic;
    gross = basic + hra + da;
    tax = 0.05 * gross;
    net = gross - tax;

    printf("Net Salary = %.2f", net);
    return 0;
}
