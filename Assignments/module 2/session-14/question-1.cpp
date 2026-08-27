// 1) Given the following buggy code meant to calculate the total price of a Zomato order, 
//    identify and fix the syntax and runtime errors:<br><br>let items = ["Burger", "Pizza",
//   "Fries"];<br>let prices = [120, 250, 90];<br>let total = 0;<br>for (i = 0; i < 
//    items.length; i++) {<br> total =+ prices[i]<br>}<br>console.log("Total price is: "
//     + total);<br><br><em><strong>Hint:</strong> Watch for assignment and loop variable 
//     issues.</em>

#include <stdio.h>

main()
{
    char items[3][20] = {"Burger", "Pizza", "Fries"};
    int prices[3] = {120, 250, 90};
    int total = 0;

    for (int i = 0; i < 3; i++)
    {
        total += prices[i];
    }

    printf("Total price is: %d", total);


}
