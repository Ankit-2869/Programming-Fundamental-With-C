// 3. Problem Statement: Login Authentication System
// A company wants to develop a simple login authentication system in C.
// The system should check whether the entered username and password match the correct ones
// stored in the system.
// Write a C program that:
// · Stores a predefined username and password (e.g., "admin" and "1234").
// · Takes username and password as input from the user.
// · Uses logical operators (&&, ||, !) to check:
// 1. If both username and password are correct, display “Login Successful.”
// 2. If either username or password is incorrect, display “Invalid Login.”
#include <stdio.h>
#include <string.h>

int main() {
    char u[20], p[20];
    char user[] = "admin";
    char pass[] = "1234";

    printf("Enter Username: ");
    scanf("%s", u);
    printf("Enter Password: ");
    scanf("%s", p);

    if (strcmp(u, user) == 0 && strcmp(p, pass) == 0) {
        printf("Login Successful\n");
    }
    
    if (strcmp(u, user) != 0 || strcmp(p, pass) != 0) {
        printf("Invalid Login\n");
    }

    return 0;
}