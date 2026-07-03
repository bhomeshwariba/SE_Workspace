#include <stdio.h>
#include <conio.h>

void main()
{
    int num1 = 60;
    int num2 = 15;
    char choice;

    printf("Choose an operation:\n");
    printf("+ for Addition\n");
    printf("- for Subtraction\n");
    printf("* for Multiplication\n");
    printf("/ for Division\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    switch(choice)
    {
        case '+':
            printf("Addition of two numbers is :- %d", num1 + num2);
            break;

        case '-':
            printf("Subtraction of two numbers is :- %d", num1 - num2);
            break;

        case '*':
            printf("Multiplication of two numbers is :- %d", num1 * num2);
            break;

        case '/':
            printf("Division of two numbers is :- %d", num1 / num2);
            break;

        default:
            printf("Invalid choice");
    }

    getch();
}