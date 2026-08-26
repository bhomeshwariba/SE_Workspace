// 2) Create a function addToCart that takes a shopping cart array and a product name, adds the product to the cart, and prints the updated cart. Demonstrate how passing the cart array by reference allows changes to persist outside the function.<br><br><em><strong>Hint:</strong> In languages like JavaScript, arrays are passed by
// reference. In C/C++, use pointers for reference behavior.</em>
#include<stdio.h>
addToCart(char *cart[], int *count, char product[])
{
    cart[*count] = product;
    (*count)++;

    printf("\nUpdated Cart:\n");

    for(int i = 0; i < *count; i++)
    {
        printf("%s\n", cart[i]);
    }
}

main()
{
    char *cart[10];
    int count = 0;

    addToCart(cart, &count, "Laptop");
    addToCart(cart, &count, "Mouse");

    printf("\nCart outside function:\n");

    for(int i = 0; i < count; i++)
    {
        printf("%s\n", cart[i]);
    }

    
}
