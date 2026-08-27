// 2) Create a 2D array called playlistRatings to store ratings for 3 Spotify playlists over
//    5 days (rows = playlists, columns = days). Fill it with sample numbers and print the ratings 
//    for the second playlist.
#include <stdio.h>
main()
{
    int playlistRatings[3][5] = {
        {4, 5, 3, 4, 5},
        {5, 4, 5, 3, 4},
        {3, 4, 4, 5, 3}
    };

    int i;

    printf("Ratings for second playlist:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Day %d: %d\n", i + 1, playlistRatings[1][i]);
    }

    
}

