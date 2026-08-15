//  4) Given three variables: likes, comments, and shares (all numbers), write code to check if a post is 'trending' on Instagram
// (at least 1000 likes OR more than 200 comments AND at least 50 shares). Print the result.

#include<stdio.h>
main()
{
	int likes = 1200;
	int comments = 250;
	int shares = 60;
	
	if (likes >= 1000 || (comments > 200 && shares >= 50))
		
	{
		printf("\n Trending");
		
	}
	else
	{
	  printf("\n Not Trending");
	  	
	}
	
	
}
