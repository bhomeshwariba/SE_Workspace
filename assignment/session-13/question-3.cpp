// 3) Add two more song names to playlist.txt without deleting the existing ones by
//    opening the file in append mode (a).

#include <stdio.h>
main()
{
    FILE *file;

    file = fopen("playlist.txt", "a");

    if (file == NULL)
    {
        printf("File not found!");
        return 1;
    }

    fprintf(file, "Faded - Alan Walker\n");
    fprintf(file, "Night Changes - One Direction\n");

    fclose(file);

    printf("Two songs added successfully.");


}
