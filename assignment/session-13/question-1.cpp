// 1) Create a file called playlist.txt and write the names of your top 3 favorite
//    songs from Spotify into it using write mode (w).

#include <stdio.h>
main()
{
    FILE *file;

    file = fopen("playlist.txt", "w");

    fprintf(file, "Perfect - Ed Sheeran\n");
    fprintf(file, "Believer - Imagine Dragons\n");
    fprintf(file, "Shape of You - Ed Sheeran\n");

    fclose(file);

    printf("Songs written to playlist.txt successfully.");


}
