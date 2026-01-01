/* 16. Display traffic signal using switch case */
#include <stdio.h>

int main() {
    int choice;

    printf("Enter color (1-Red, 2-Yellow, 3-Green): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Stop"); break;
        case 2: printf("Ready"); break;
        case 3: printf("Go"); break;
        default: printf("Invalid Choice");
    }

    return 0;
}
