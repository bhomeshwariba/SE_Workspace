// 2) Create a structure called FoodItem to store Zomato-style menu data: itemName (string), 
//  price (float), and rating (float). Initialize an array of 3 FoodItem variables with real 
//  menu items and display their details using a loop.

#include <stdio.h>

struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};

main()
{
    struct FoodItem menu[3] = {
        {"Pizza", 299.00, 4.5},
        {"Burger", 149.00, 4.2},
        {"Biryani", 199.00, 4.7}
    };

    for(int i = 0; i < 3; i++)
    {
        printf("\nItem Name: %s", menu[i].itemName);
        printf("\nPrice: Rs. %.2f", menu[i].price);
        printf("\nRating: %.1f", menu[i].rating);
    }


}
