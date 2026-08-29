// 3) Given an array of 5 order amounts (e.g., Zomato orders), use a pointer to iterate through the 
//    array and print each amount along with its memory address.<br><br><em><strong>Hint:</strong>
//    Use pointer arithmetic to move to the next element.</em>

#include <stdio.h>
main()
{
    int orders[5] = {250, 120, 350, 180, 500};
    int *ptr = orders;

    for(int i = 0; i < 5; i++)
    {
        printf("Order Amount = %d, Address = %p\n",
               *(ptr + i), (void*)(ptr + i));
    }

    
}
