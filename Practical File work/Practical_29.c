/* 29. Read marks, calculate average and display grade */
#include <stdio.h>

void grade(float avg) {
    if (avg >= 90) printf("Grade A");
    else if (avg >= 80) printf("Grade B");
    else if (avg >= 70) printf("Grade C");
    else if (avg >= 60) printf("Grade D");
    else printf("Grade F");
}

int main() {
    int i;
    float marks, total = 0;

    for (i = 1; i <= 5; i++) {
        printf("Enter marks %d: ", i);
        scanf("%f", &marks);
        total += marks;
    }

    float avg = total / 5;
    printf("Average = %.2f\n", avg);
    grade(avg);

    return 0;
}
