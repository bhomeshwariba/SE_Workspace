// 5) Write a code snippet that demonstrates the difference between pre-increment (++count) and post-increment (count++)
// by logging the values before and after using both on a followerCount variable.

#include<stdio.h>
main()
{
	int followerCount = 100;
	printf("\n Before pre - increment: %d", followerCount);
	printf("\n Post - increment: %d", followerCount++);
	printf("\n After Post - increment: %d", followerCount );
	
	followerCount = 100;
	
	
	printf("\n ==============================\n");
	
	printf("\n Before post - increment: %d", followerCount);
	printf("\n Post - increment: %d", followerCount++);
	printf("\n After Post - increment: %d", followerCount );
	
	

}
