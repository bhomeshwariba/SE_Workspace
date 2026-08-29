//  2) Build a Flipkart-style discount calculator: given product price, discount percentage, 
//     and a boolean isMember, use arithmetic and logical operators to calculate the final price 
//     (apply an extra 5% off if isMember is true).  

#include <stdio.h>
main()
{
	float price,discount,discountamount,finalprice;
	bool isMember;
	
	printf("Enter prouduct price:");
	scanf("%f",&price);
	
	printf("Enter discount percentage:");
	scanf("%f",&discount);
	
	printf("Are you member? (1 = yes, 2 = no):");
	scanf("%d",&isMember);
	
	
	
	discountamount = price * discount / 100;
	finalprice = price - discountamount;
	
	if (isMember == true)
	{
		finalprice = finalprice - (finalprice * 5 / 100);
	}
	
    	printf("\n finalprice: %.2f", finalprice);
	
	
	
}
