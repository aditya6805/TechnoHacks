#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	printf("\t\2Welcome to the Number Guess Game !!\3");        //random number generating
	srand(time(NULL));
	int randomNumber = rand() % 100 + 1;

	while(1)
	{
		printf("\nEnter the number betweem 1 to 100: ");
		int num;
		scanf("%d",&num);                                              //Taking input
		
		int result = randomNumber-num ;
		int Result = abs(result);                             //Converting result to positive
		
		if(num==randomNumber)                                 //Comparing numbers 
		  { 
		  printf("Wow ! \nYou made it \3\3");
		  exit(0);
	      }
		 
		else if(Result<=5)                               //Providing suggestions
		printf("You are about to reach !");
		
		else 
		printf("Keep trying !!");  
	}
}
