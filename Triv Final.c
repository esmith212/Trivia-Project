
#include <stdio.h>


// Simple Trivia Program containing 5 questions.//

int main()
{

	char answers[4] = { '4','3','2', '3' }; //identifying char answers, have not been able to get this to work.
	int a;// identifying variables for character input later in the code. This is used to check if the answer entered is correct.
	int c = 5;
	int b = 4;
	int d = 2;
	int e = 8;
	int q = 3;
	int f = 7;
	int;

	int score = 0;
	score = score + 1;

	printf("Alright its time to answer a few questions..\n");//printf statements to display questions on console. 
	printf("All of the answered questions will be answered with a single digit response...\n");
	printf("Press any key if you are ready to begin....\n");
	a = getchar();// prompting user input
	printf("Looks like you're ready...let us begin...\n");






	printf("1. What is 2+2?\n"); //printf command being used to show question. Using /n to tell program to start a new line after this command.
	b = getchar();

	if (b = getchar() == '4')
	{
		printf("Correct! Next question!\n");
	}
	else
	{
		return 0;
	}




	printf("2. What is 4+1?\n");
	c = getchar();

	if (c = getchar() == '5')
	{
		printf("Nice job!\n");
	}
	else
	{
		printf("Incorrect, Please try again from the beginning!\n");
		return 0;
	}



	printf("3.What is 1+1?\n");
	d = getchar();

	if (d = getchar() == '2')
	{
		printf("Nice job!\n");
	}
	else
	{
		printf("Incorrect! Please try again!\n");
		return 0;
	}




	printf("4. What is 3+4? \n");
	f = getchar();
	if (f = getchar() == '7')
	{
		printf("Correct!\n;");
	}
	else
	{
		printf("Incorrect, Please try again from the beginning!\n");

		
	}

	printf("5.What is 6-2?\n");
	q = getchar();
	while (q = getchar() == '4')
		printf("Correct!");
		}