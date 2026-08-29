// 2) Add a menu-driven interface to your Music Listening Logger so users can choose to 
//    log new listening minutes, view their weekly summary, or exit the app.<br><br><em>
//    <strong>Hint:</strong> Use a loop to repeatedly show the menu until the user selects 
//    exit.</em>

#include<stdio.h>
main()
{
	int minutes[7]={0};
	int choice;
	int total;
	
	char *day[]={
	  "Monday","Thuesday","Wednesday",
	  "Thursday","Friday","Saturday","sunday" 
	};
	
	do{
		printf("\n---Music Listening Logger---\n");
		printf("1. Log new listening Minutes\n");
		printf("2. View Weekly Summary\n");
		printf("3. Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		
		if (choice == 1)
		{
			for
		}
	}
}
