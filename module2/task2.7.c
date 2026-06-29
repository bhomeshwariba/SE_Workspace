#include<stdio.h>
#include<conio.h>
void main()
{
    int sub1 = 56;
    int sub2 = 70;
    int sub3 = 60;
    int sum = sub1+sub2+sub3;
    float percentage = sum / 3.0;
      
    printf("Sum = %d", sum);
    printf("\nPercentage = %.2f", percentage);
    getch();
}