// 4) Given a 2D array called cricketScores where each row represents an IPL match and columns 
//    represent runs scored by each team, write code to print the highest score from each match.
#include <stdio.h>
main()
{
    int cricketScores[3][2] = {
        {180, 165},
        {150, 175},
        {200, 190}
    };

    int i, highest;

    for(i = 0; i < 3; i++)
    {
        if(cricketScores[i][0] > cricketScores[i][1])
            highest = cricketScores[i][0];
        else
            highest = cricketScores[i][1];

        printf("Match %d highest score = %d\n", i + 1, highest);
    }


}
