// 3) Write a function formatFollowersCount(count) that takes a number and returns a 
//   formatted string like Instagram: 1500 as '1.5K', 1200000 as '1.2M', and numbers 
//   below 1000 as-is. Add clear comments and use proper indentation.

#include <stdio.h>
formatFollowersCount(int count)
{
    
    if (count >= 1000000)
    {
        printf("%.1fM", count / 1000000.0);
    }
    
    else if (count >= 1000)
    {
        printf("%.1fK", count / 1000.0);
    }
    
    else
    {
        printf("%d", count);
    }
}

main()
{
    
    printf("1500 = ");
    formatFollowersCount(1500);

    printf("\n1200000 = ");
    formatFollowersCount(1200000);

    printf("\n500 = ");
    formatFollowersCount(500);


}
