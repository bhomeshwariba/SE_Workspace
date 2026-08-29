// 2) Open playlist.txt in read mode (r) and display each song name on a separate 
//    line in the console.

#include <stdio.h>
main()
{
    FILE *file;
    char song[100];

    file = fopen("playlist.txt", "r");

    if (file == NULL)
    {
        printf("File not found!");
        return 1;
    }

    while (fgets(song, sizeof(song), file) != NULL)
    {
        printf("%s", song);
    }

    fclose(file);

    
}
