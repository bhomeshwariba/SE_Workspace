// 3) Write a function isEligibleForOffer that takes a user's age and total order value,
// and returns true if the user is 18 or older AND the order value is above 500, 
//otherwise false.<br><br><em><strong>Hint:</strong> Use relational and logical operators together.</em>

#include <stdio.h>
main()
{
	 int age;
	 float totaloderValue;
	 bool isEligibleForoffer;
	 
	 printf("Enter age:");
	 scanf("%d", &age);
	 
	 printf("Enter total order value:");
	 scanf("%f", &totaloderValue);
	 
	 isEligibleForoffer = age >= 18 && totaloderValue > 500;
	 
	 printf("Eligible : %d",isEligibleForoffer);
	 
	 
}
