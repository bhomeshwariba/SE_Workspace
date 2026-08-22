//2) Create a menu-driven console app that lets the user: 1) View your favorite 3 IPL teams, 2) Add a new team, 3) Exit. Use a while loop to keep
//showing the menu until the user chooses Exit.<br><br><em><strong>Hint:</strong>Use input() (or Scanner in Java) to get the user's choice each time.</em>

#include<stdio.h>
#include<string.h>
main()
{
	char teams[10][30] = {"csk","MI","RCB"};
	int count = 3;
	int choice;
	char newteam[30];
	
	while (1)
	{
		printf("\n-------IPL Team Menu---------");
		printf("\n1. View Favorite 3 IPL Teams");
		printf("\n2. Add New Team");
		printf("\n3. Exit");
		
		printf("Enter your choice:");
		scanf("%d",&choice);
		
		if (choice == 1)
        {
            printf("\nFavorite IPL Teams:\n");

            for (int i = 0; i < count; i++)
            {
                printf("%d. %s\n", i + 1, teams[i]);
            }
        }
        else if (choice == 2)
        {
            printf("Enter new IPL team: ");
            scanf("%s",newteam);

            strcpy(teams[count], newteam);
            count++;

            printf("Team added successfully!\n");
        }
        else if (choice == 3)
        {
            printf("Program exited.\n");
            break;
        }
        else
        {
            printf("Invalid choice! Please try again.\n");
        }
    }

	}

