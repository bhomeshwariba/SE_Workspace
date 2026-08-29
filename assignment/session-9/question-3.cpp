// 3) Build a function that takes a 1D array of 7 integers representing your daily Zomato order
//   amounts and calculates the average spend for the week.<br><br><em><strong>Hint:</strong> Use a 
//   loop to sum the values, then divide by the array length.</em>
#include <stdio.h>
float averageSpend(int orders[])
{
    int sum = 0;
    int i;

    for(i = 0; i < 7; i++)
    {
        sum = sum + orders[i];
    }

    return (float)sum / 7;
}

main()
{
    int dailyOrders[7] = {250, 300, 180, 400, 350, 220, 500};

    printf("Average weekly spend = Rs. %.2f\n", averageSpend(dailyOrders));

}
