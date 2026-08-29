// 1) Create a console-based app called Music Listening Logger that allows users to enter 
//   the number of minutes they listened to music each day for a week and stores this data 
//   in an array.

#include <stdio.h>
main() 
{
    int minutes[7];
    int total = 0;
    char *days[] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday", "Sunday"
};

    printf("=== Music Listening Logger ===\n\n");

    // Take listening time for each day
    for (int i = 0; i < 7; i++) {
        printf("Enter minutes listened on %s: ", days[i]);
        scanf("%d", &minutes[i]);
        total += minutes[i];
    }

    // Display the weekly record
    printf("\n=== Weekly Music Listening Record ===\n");

    for (int i = 0; i < 7; i++) {
        printf("%s: %d minutes\n", days[i], minutes[i]);
    }

    printf("\nTotal listening time: %d minutes\n", total);
    printf("Average per day: %.2f minutes\n", total / 7.0);


}
