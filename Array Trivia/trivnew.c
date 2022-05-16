#include <stdio.h>//Pre processor
//user defines function specifying output questions and array sizes.
void triviaGame(char* outputs[], int answers[], int size) {
	int input;//defining input
	int score = 0;//defining score
	FILE* file = fopen("trivia.txt", "w");//Code for initiaizing open file

	for (int i = 0; i < size; ++i)//This is a loop that counts the size of the array down until it gets to zero cycling through questions and answers
	{
		printf(outputs[i]); //command to output into console. Pointing to the array
		if (file) {//command to check if file is open if so, below command inputs the array in file text file.
			fputs(outputs[i], file);
		}

		scanf_s("%d", &input);// prompting user input
		
		if (input == answers[i]) {//if/else statement checking answers to questions. 
			++score;//adding to score +1 depending on correct or not
			printf("You are very smart, You score is %d \n\n", score);//Command to print out message if answer is correct. 
		}
		else {
			printf("You are a such a silly goose, you typed %d, the correct answer is %d \n\n", input, answers[i]);//statement to print out if answer is wrong. 
		}
		if (i == size-1) {
			printf("You completed the trivia, You final score is %d \n\n", score);//command to show output on console about completing the trivia game. 
			fclose(file);// close file that was opened in beginning of loop. 
		}
	}

}
//Main function, Identifies question and answer arrays and holds correct answers as well. 
int main()
{
	char *outputs[4] = { "1.What is 1+1\n1\n2\n3\n5\n\n", "2.What is 2+2?\n4\n6\n5\n8\n\n", "3.What is 3+3?\n1\n6\n8\n 9\n\n", "4.What is 4+4\n4\n8\n9\n2\n\n" };
	int answers[4] = { 2,4, 6, 8 };
	
	triviaGame(outputs, answers, 4);//Triggers function
}