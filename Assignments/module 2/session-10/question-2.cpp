// 1) Take input for two usernames (as strings) and compare them using strcmp(). 
//     Display whether they are the same or different.

#include <stdio.h>
#include <string.h>
main()
{
    char username1[50], username2[50];

    printf("Enter first username: ");
    scanf("%s", username1);

    printf("Enter second username: ");
    scanf("%s", username2);

    if(strcmp(username1, username2) == 0)
    {
        printf("Both usernames are same.\n");
    }
    else
    {
        printf("Usernames are different.\n");
    }


}
