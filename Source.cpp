#include <iostream>
#include <string>
#include <chrono>

using std::cout;	using std::endl;
using std::cin;		using std::string;

void numGuessing(int difficulty);

int main()
{
	srand(time(nullptr));

	cout << "Welcome to the Number Guessing Game!" << endl;
	cout << "I'm thinking of a number between 1 and 100." << endl << endl;

	while (true)
	{
		cout << "Pleace select the difficulty level:" << endl;
		cout << "1. Easy (10 chances)" << endl;
		cout << "2. Medium (5 chances)" << endl;
		cout << "3. Hard (3 chances)" << endl << endl;

		int difficulty;
		cout << "Enter your choice: ";
		cin >> difficulty;
		cout << endl;

		switch (difficulty)
		{
		case 1:
			cout << "Great! You have selected the Easy difficulty level." << endl;
			cout << "Let's start the game!" << endl << endl;
			numGuessing(difficulty);
			break;
		case 2:
			cout << "Great! You have selected the Medium difficulty level." << endl;
			cout << "Let's start the game!" << endl << endl;
			numGuessing(difficulty);
			break;
		case 3:
			cout << "Great! You have selected the Hard difficulty level." << endl;
			cout << "Let's start the game!" << endl << endl;
			numGuessing(difficulty);
			break;
		default:
			cout << "Invalid difficulty! Please, select it again." << endl << endl;
			continue;
		}

		cout << "Do you want play again. Choose Y/N: ";
		char quit;
		cin >> quit;
		if (quit == 'N' || quit == 'n')
		{
			cout << "Thanks for playing! Goodbye!" << endl;
			return 0;
		}
		cout << endl;
	}
	return 0;
}

void numGuessing(int difficulty)
{
	int num = rand() % 100 + 1;
	int maxAttempts = (difficulty == 1) ? 10 : (difficulty == 2) ? 5 : 3;


	auto start = std::chrono::high_resolution_clock::now();

	for (int i = 1; i <= maxAttempts; i++)
	{
		cout << "Attempt: " << i << "/" << maxAttempts << ".\tEnter your guess: ";
		int guess;
		cin >> guess;

		if (guess > num)
			cout << "Incorrect! The number is less than " << guess << '.' << endl << endl;
		else if (guess < num)
			cout << "Incorrect! The number is greater than " << guess << '.' << endl << endl;
		else
		{
			auto end = std::chrono::high_resolution_clock::now();
			std::chrono::duration<double> elapsedTime = end - start;

			cout << "Congratulations! You guessed the correct number in " << i << " attempts." << endl << endl;
			cout << "You took " << elapsedTime.count() << " seconds to guess the number." << endl << endl;
			return;
		}
	}
	cout << "Sorry, you've used all your attempts! The correct number was " << num << '.' << endl << endl;
}
