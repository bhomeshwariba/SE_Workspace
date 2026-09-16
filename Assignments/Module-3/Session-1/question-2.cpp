// 2) Modify your tasklist_c.c to add a function markTaskDone(int index) that sets the 
//  selected task to 'DONE' in the array, then print the updated list.<br><br><em><strong>
//  Hint:</strong> Use a separate status array or append ' - DONE' to the task string.</em>

#include<stdio.h>
#include<string.h>

#define MAX_TASKS 5
char tasks[MAX_TASKS][100];
char status[MAX_TASKS][10];

int taskCount = 0;

void markTaskDone(int index)
{
	if (index >= 0 && index < taskCount)
	{
		strcpy(status[index],"DONE");
		
	}
	else
	{
		printf("\n Invelid task number!");
		
	}
	
}
main()
{
	int i;
	int doneTask;
	
	printf("\nEnter up to 5 tasks:");
	
	for(i=0;i<MAX_TASKS;i++)
	{
		printf("Enter task %d:",i+1);
		gets(tasks[i]);
		
		strcpy(status[i],"PENDING");
		taskCount++;
		
	}
	
	printf("\n--- Task List---\n");
	
	for(i=0;i<taskCount;i++);
	{
		printf("\n%d. %s - %s",i+1,tasks[i],status[i]);
		
	}
	 printf("\n Enter task Number to mark as DONE:");
	 scanf("%d",&doneTask);
	 
	 markTaskDone(doneTask-1);
	 
	 printf("\n --- Updated Task List---\n");
	 
	 for(i=0;i<taskCount;i++)
	 {
	 	printf("\n%d. %s - %s",i + 1,tasks[i],status[i]);
	 	
	 }
}
