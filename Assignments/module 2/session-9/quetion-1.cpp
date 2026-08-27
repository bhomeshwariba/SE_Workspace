// 1) Declare a 1D array called dailySteps with 7 elements to store your step count for each day 
//    of the week, assign sample values, and print each value using a loop.

#include <stdio.h>
main()
{
    int dailySteps[7] = {5000, 6500, 7000, 4500, 8000, 9000, 7500};
    int i;

    for(i = 0; i < 7; i++)
    {
        printf("Day %d: %d steps\n", i + 1, dailySteps[i]);
    }

    
}
