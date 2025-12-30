//Ankit kumar (ERP: RU-25-10211)
//Project number 13 : Restaurant billing system
// Problem statement: Restaurant billing system. Accept orders, generate detailed bill with GST and discounts

#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    char mobile[15];
    int choice, quantity;
    float total = 0, gst, discount = 0, finalTotal;

    printf("Welcome to Our Restaurant!\n");

    printf("Please enter Mobile Number: ");
    scanf("%s", mobile);

    getchar(); // clear newline

    printf("Please enter Customer Name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("\n--- MENU ---\n");
    printf("1. Burger       - Rs 100\n");
    printf("2. Pizza        - Rs 300\n");
    printf("3. French Fries - Rs 80\n");
    printf("4. Pasta        - Rs 150\n");
    printf("5. Coke         - Rs 50\n");
    printf("0. Finish & Print Bill\n");

    while (1) {
        printf("\nEnter Item Number: ");
        scanf("%d", &choice);

        if (choice == 0) break;

        printf("Enter Quantity: ");
        scanf("%d", &quantity);

        switch (choice) {
            case 1: total += 100 * quantity; break;
            case 2: total += 300 * quantity; break;
            case 3: total += 80 * quantity; break;
            case 4: total += 150 * quantity; break;
            case 5: total += 50 * quantity; break;
            default: printf("Invalid Item!\n");
        }
    }

    gst = total * 0.18;
    if (total > 500) {
        discount = total * 0.10;
    }

    finalTotal = total + gst - discount;

    printf("\n==============================");
    printf("\n       ATES Services         ");
    printf("\n==============================");
    printf("\nCustomer: %s", name);
    printf("\nMobile:   %s", mobile);
    printf("\n------------------------------");
    printf("\nSub-Total:   Rs %.2f", total);
    printf("\nGST (18%%):   Rs %.2f", gst);
    printf("\nDiscount:    Rs %.2f", discount);
    printf("\n------------------------------");
    printf("\nGRAND TOTAL: Rs %.2f", finalTotal);
    printf("\n==============================");
    printf("\n  Thank you! Visit Again.\n");

    return 0;
}
