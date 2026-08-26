// 5) Refactor an existing function you wrote above to make it reusable for both product names 
//    and usernames (for example, a function that capitalizes the first letter of any string).
//    <br><br><em><strong>Constraint:</strong> The refactored function should work for any string 
//     input, not just a specific use case.</em>
#include <stdio.h>
#include <ctype.h>
capitalizeFirst(char str[])
{
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }
}

 main()
{
    char product[] = "laptop";
    char username[] = "krish";

    capitalizeFirst(product);
    capitalizeFirst(username);

    printf("Product Name: %s\n", product);
    printf("Username: %s\n", username);

    
}
