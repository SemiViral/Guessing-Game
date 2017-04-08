#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int Guess(int max, int min) {
	return max - (max - min) / 2;
}

int main()
{
	bool isGuessed = false;
	int guesses[7];

	int min = 0;
	int max = 100;

	string userResponse;

	printf("Hello, please think of a number between %d and %d.\n", min + 1, max);
	printf("Please type 'high' if the guess is too high, 'low' if too low, and 'correct' if guessed correctly.\n");
	printf("I will now try to guess this number.\n");

	do {
		int currentGuess = Guess(max, min);

		printf("My guess is: %d\n", currentGuess);

		getline(cin, userResponse);

		if (userResponse == "high") {
			max = currentGuess;
		}
		else if (userResponse == "low") {
			min = currentGuess;
		}
		else if (userResponse == "correct") {
			isGuessed = true;
		}
	} while (!isGuessed);

	return 0;
}
