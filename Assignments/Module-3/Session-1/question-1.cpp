// 1) Write a simple C program tasklist_c.c that allows you to add up to 5 tasks (as strings)
//  to a global array and print all tasks using a for loop.

#include<stdio.h>
#include<string.h>

#define MAX_TASKS 5

char tasks[MAX_TASKS][100];
int taskCount = 0;

main()
{
	int i;
	printf("\n Enter up to 5 tasks:");
	
	for(i=0;i<MAX_TASKS;i++)
	{
		printf("\n Enter task %d:",i+1);
		fgets(tasks[i],sizeof(tasks[i]),stdin);
		
		tasks[i][strcspn(tasks[i], "\n")] = '\0';
		taskCount++;
		
	}
	
	printf("\n----------Task List----------\n");
	
	for(i=0;i<taskCount;i++)
	{
		printf("%d.%s\n",i+1,tasks[i]);
	}
	
}
