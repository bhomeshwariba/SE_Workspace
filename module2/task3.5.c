#include <stdio.h>
#include <conio.h>

void main()
{
    float base = 5, height = 8;
    float length = 12, width = 14;
    float radius = 8;
    float area;

    int choice;

    printf("\nChoices of Menu");
    printf("\n1. Area of Triangle");
    printf("\n2. Area of Rectangle");
    printf("\n3. Area of Circle");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        area = 0.5 * base * height;
        printf("\nArea of Triangle is : %.2f", area);
    }
    else if (choice == 2)
    {
        area = length * width;
        printf("\nArea of Rectangle is : %.2f", area);
    }
    else if (choice == 3)
    {
        area = 3.14 * radius * radius;
        printf("\nArea of Circle is : %.2f", area);
    }
    else
    {
        printf("\nInvalid Choice!");
    }

    getch();
}