#include <stdio.h>


int main()
{
	char question[][100] = { "1. In what game series did Spartan 117 destroy planet like rings found around the galaxy?",
							"2. Jesse Leach is the lead singer of what Metalcore band?",
							"3. What state is Grand Canyon University located in?",
							"4. What is the team mascot for Grand Canyon University?",
							"5. What is the homeworld of Paul Atriedes?",
							"6. What popular gaming console was created by Microsoft?",
							"7. Who is the current President?",
							"8. On what planet did Luke Skywalker grow up on?",
							"9. Frasier is a spin off of what older sitcom?",
							"10. Who is the creator of C?", };

	char options[][100] = { "A. Grand Theft Auto", "B. Halo", "C. Titalfall", "D. Tomb Raider",
							"A. The Beatles", "B. Killswitch Engage", "C. Creed", "D. The Monkeys",
							"A. Wisconsin", "B. Washington", "C. Arizona", "D. California"
							"A. Thunder the Antelope", "B. Winston the Gorilla", "C. Bango the Buck", "D. Pounce the Panther",
							"A. Tatooine", "B. Caladan", "C. Manaan", "D. Arrakis",
							"A. Sony", "B. Nintendo", "C. Microsoft", "D. SpaceX"
							"A. President Obama", "B. President Trump", "C. President Biden", "D. President Clinton",
							"A. Tatooine", "B. Manaan", "C. Coruscant", "D. Arrakis"
							"A. Seinfeld", "B. Malcom in the Middle", "C. Cheers", "D. Futurama"
							"A. Dennis Ritchie", "B. Jerry Seinfeld", "C. Walter White", "D. Frasier Crane" };

	char answers[10] = { 'B', 'B', 'C', 'A', 'B', 'C', 'C', 'A', 'C','A' };
	int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

	char guess;
	int score;

	printf("Elliots Trivia Game");

	for (int i = 0; i < numberOfQuestions; i++)

	{
		printf("%s\n", questions[i]);
	}
	return 0;

}
