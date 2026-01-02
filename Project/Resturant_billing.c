//Ankit kumar (ERP: RU-25-10211)
//Project number 13 : Restaurant billing system
// Problem statement: Restaurant billing system. Accept orders, generate detailed bill with GST and discounts

#include <stdio.h>
int main() {
    char name[10], mobile[12];
    int choice, quantity;
    float total = 0, gst, discount = 0, finalTotal;

    int price[5] = {10, 120, 99, 189, 20};// by deffault price
    int qty[5] = {0, 0, 0, 0, 0};// by-default quantity

    printf("Welcome to Our Restaurant!\n");

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Mobile Number: ");
    scanf("%s", mobile);

    printf("\n--- MENU ---\n");
    printf("1. Samosa              - Rs 10\n");
    printf("2. Pav Bhaji           - Rs 120\n");
    printf("3. Masala Dosa         - Rs 99\n");
    printf("4. Pizza (Veg Paradise)- Rs 189\n");
    printf("5. Thums-up            - Rs 20\n");
    printf("0. Finish & Print Bill\n");

    while (1) {
        printf("\nEnter Item Number: ");
        scanf("%d", &choice);

        if (choice == 0)
            break;

        if (choice < 1 || choice > 5) {//
            printf("Invalid Item!\n");
            continue;// handels error
        }

        printf("Enter Quantity: ");
        scanf("%d", &quantity);

        if (quantity <= 0) {
            printf("Invalid quantity!\n");
            continue;// again handels error
        }

        qty[choice - 1] += quantity; //logical part to access index 
        total += price[choice - 1] * quantity;
    }

    gst = total * 0.18;
    if (total >= 500)
        discount = total * 0.38;

    finalTotal = total + gst - discount;

    printf("\n==============================");
    printf("\n       ATES Services         ");
    printf("\n==============================");
    printf("\nCustomer: %s", name);
    printf("\nMobile:   %s", mobile);

    printf("\n------------------------------");
    printf("\nItem                   Qty  Amount");
    printf("\n------------------------------");

    if (qty[0] > 0)
        printf("\nSamosa                 %d   Rs %d", qty[0], qty[0] * price[0]);
    if (qty[1] > 0)
        printf("\nPav Bhaji              %d   Rs %d", qty[1], qty[1] * price[1]);
    if (qty[2] > 0)
        printf("\nMasala Dosa            %d   Rs %d", qty[2], qty[2] * price[2]);
    if (qty[3] > 0)
        printf("\nPizza (Veg Paradise)   %d   Rs %d", qty[3], qty[3] * price[3]);
    if (qty[4] > 0)
        printf("\nThums-up               %d   Rs %d", qty[4], qty[4] * price[4]);

    printf("\n------------------------------");
    printf("\nSub-Total:   Rs %.2f", total);
    printf("\nGST (18%%):   Rs %.2f", gst);
    printf("\nDiscount:    Rs %.2f", discount);
    printf("\n------------------------------");
    printf("\nGRAND TOTAL: Rs %.2f", finalTotal);
    printf("\n==============================");
    printf("\nThank you! Visit Again.\n");

    return 0;
}
