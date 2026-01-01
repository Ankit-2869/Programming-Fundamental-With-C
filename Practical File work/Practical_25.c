/* 25. Display weekly lecture schedule using switch */
#include <stdio.h>

int main() {
    int day;

    printf("Enter day (1-Mon to 6-Sat): ");
    scanf("%d", &day);

    switch (day) {
        case 1: printf("Monday: C Programming"); break;
        case 2: printf("Tuesday: Mathematics"); break;
        case 3: printf("Wednesday: Web Tech"); break;
        case 4: printf("Thursday: Physics"); break;
        case 5: printf("Friday: Lab"); break;
        case 6: printf("Saturday: Seminar"); break;
        default: printf("Invalid Day");
    }

    return 0;
}
