// 3) Define a nested structure called MovieShow for a BookMyShow-style app: Movie (string),
// Screen (integer), and a nested structure Time with hours and minutes (integers). Create and 
// initialize a MovieShow variable for any movie and print its details in the format 'Movie: X, 
// Screen: Y, Time: HH:MM'.

#include <stdio.h>

struct MovieShow
{
    char Movie[50];
    int Screen;

    struct Time
    {
        int hours;
        int minutes;
    } time;
};

main()
{
    struct MovieShow m = {"Avengers", 3, {7, 30}};

    printf("Movie: %s, Screen: %d, Time: %02d:%02d",
           m.Movie, m.Screen, m.time.hours, m.time.minutes);

    
}

