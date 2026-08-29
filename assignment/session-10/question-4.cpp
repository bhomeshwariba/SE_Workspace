// 4) Build a small script that takes the user's full name as input and creates a username by 
//    copying only the first 5 characters using strcpy(). Print the generated username.
//   <br><br><em><strong>Constraint:</strong> If the name is shorter than 5 characters, use the 
//    full name as the username.</em>

#include <stdio.h>
#include <string.h>
main()
{
    char name[50], username[6];
    int i;

    printf("Enter your full name: ");
    scanf("%s", name);

    if(strlen(name) < 5)
    {
        strcpy(username, name);
    }
    else
    {
        strncpy(username, name, 5);
        username[5] = '\0';
    }

    printf("Generated Username = %s\n", username);


}
