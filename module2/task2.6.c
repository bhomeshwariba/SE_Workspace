#include<stdio.h>
#include<conio.h>
void main()
{
    int principal = 1000;
    int rate = 10;
    int time = 2;

    float si =(principal*rate*time)/100.0;

    printf("simple Interest is %f", si);
    getch();
}
