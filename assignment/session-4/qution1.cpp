// 1) Create a simple user input calculateTotal that takes two numbers: itemPrice and quantity, 
//    and returns the total bill amount using arithmetic operators.  

#include <stdio.h>
main()
{
	int quantity;
	float itemprice,total;
	
	printf("Enter item price:");
	scanf("%f",&itemprice);
	
	printf("Enter quantity:");
	scanf("%d",&quantity);
	
	total = itemprice * quantity;
	
	printf("\n total bill amount: %.2f",total);
}
