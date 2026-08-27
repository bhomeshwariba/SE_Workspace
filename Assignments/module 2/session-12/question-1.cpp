// 1) Declare a structure named Playlist to store details of a song: title (string), 
//   artist (string), and duration in seconds (integer). Initialize one Playlist variable 
//   with your favorite song's details and print each field.

#include <stdio.h>
#include <string.h>

struct Playlist
{
    char title[50];
    char artist[50];
    int duration;
};

main()
{
    struct Playlist p = {"Believer", "Imagine Dragons", 204};

    printf("Song Title: %s\n", p.title);
    printf("Artist: %s\n", p.artist);
    printf("Duration: %d seconds\n", p.duration);

    
}

