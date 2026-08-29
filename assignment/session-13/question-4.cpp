// 3) Write a program that reads all song names from playlist.txt and prints only 
//    those that contain the word 'love' (case-insensitive).<br><br><em><strong>Hint:
//    </strong> Use the 'in' keyword or equivalent string method for filtering.</em>

#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
    FILE *file;
    char song[100];
    char lower[100];

    file = fopen("playlist.txt", "r");

    if (file == NULL)
    {
        printf("File not found!");
        return 1;
    }

    while (fgets(song, sizeof(song), file) != NULL)
    {
        strcpy(lower, song);

        for (int i = 0; lower[i] != '\0'; i++)
        {
            lower[i] = tolower(lower[i]);
        }

        if (strstr(lower, "love") != NULL)
        {
            printf("%s", song);
        }
    }

    fclose(file);

    
}
