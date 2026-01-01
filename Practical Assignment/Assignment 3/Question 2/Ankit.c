#include <stdio.h>

int main() {
    int i, j;

    printf("A:\n");
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            if(((j==0 || j==4) && i!=0) || (i==0 && j!=0 && j!=4) || i==2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    printf("N:\n");
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            if(j==0 || j==4 || i==j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    printf("K:\n");
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            if(j==0 || (i==0 && j==4) || (i==1 && j==2) || (i==2 && j==1) || (i==3 && j==2) || (i==4 && j==4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    
    printf("I:\n");
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            if(i==0 || i==4 || j==2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    printf("T:\n");
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            if(i==0 || j==2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}