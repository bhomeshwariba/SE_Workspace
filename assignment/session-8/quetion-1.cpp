// 1) Declare a function called getUserInitials that takes a user's full name (like 'Virat Kohli') and returns their initials in uppercase 
// (e.g., 'VK'). Call this function with your favorite cricketer's name and print the result.
#include<stdio.h>
#include<ctype.h>

getUserInitials(char name[])
{
    printf("%c", toupper(name[0]));

    for(int i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ')
        {
            printf("%c", toupper(name[i+1]));
        }
    }
}

main()
{
    char name[] = "virat kohli";

    printf("Initials: ");
    getUserInitials(name);

    
}
