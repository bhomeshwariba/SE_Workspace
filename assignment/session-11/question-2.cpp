// 2) Write a function swapPlaylistCounts(int *a, int *b) that swaps the number of songs in two
//    Spotify playlists using pointers, then call the function in main and print the swapped values.

#include <stdio.h>
swapPlaylistCounts(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

main()
{
    int playlist1 = 50;
    int playlist2 = 100;

    swapPlaylistCounts(&playlist1, &playlist2);

    printf("Playlist 1 songs = %d\n", playlist1);
    printf("Playlist 2 songs = %d\n", playlist2);

    
}

