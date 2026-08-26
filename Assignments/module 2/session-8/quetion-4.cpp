// 4) Build a function formatPrice that takes a price in rupees and returns a string 
//    formatted like Flipkart's price tag (e.g., '?1,599'). Use this function to display 
//     prices for three different products.

#include <stdio.h>

formatPrice(int price)
{
    printf("?%d", price);
}

main()
{
    printf("Product 1: ");
    formatPrice(1599);

    printf("\nProduct 2: ");
    formatPrice(2499);

    printf("\nProduct 3: ");
    formatPrice(999);

    
}

