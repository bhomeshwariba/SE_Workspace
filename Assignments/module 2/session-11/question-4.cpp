// 4) Create a function incrementFollowers(int *followers, int n) that increases each follower
//   count in an array (representing Instagram followers for 5 friends) by 100 using pointer 
//   arithmetic, then print the updated counts.

#include <stdio.h>

incrementFollowers(int *followers, int n)
{
    for(int i = 0; i < n; i++)
    {
        *(followers + i) = *(followers + i) + 100;
    }
}
main()
{
    int followers[5] = {500, 800, 1200, 1500, 2000};

    incrementFollowers(followers, 5);

    printf("Updated followers:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", followers[i]);
    }

}

