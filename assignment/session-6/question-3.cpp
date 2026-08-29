//3) Build a 'Guess the Song' game like Spotify — the program randomly picks a song name from a list and asks the user to guess it. Use a do-while loop so the user can keep guessing until they get it right.<br><br><em><strong>Constraint:</strong> 
// Use at least 3 song names of your choice.</em>

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
main()
{
     int random;
     char songs[3][30] = {"Kesariya", "Tum Hi Ho","Chaleya"};
     char guess[30];
     
     srand(time(0));
     random = rand() % 3;
     
     printf("\n----guess the song game ----");
     
     do
     {
     	printf("\n Guess the song:");
     	scanf("%s",guess);
     	
     	if(strcmp(guess,songs[random]) == 0)
     	{
     		printf("\nCorrect! You guessed the song!");
		 }
		 else
		 {
		 	printf("\nWrong! try again.");
		 }
		 
	 } while(strcmp(guess, songs[random]) !=0);
	 
	 printf("\n Game Over.Thank You!");
     
     
	 	
}
