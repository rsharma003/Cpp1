#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

// Guess my number game (asking user if they guess correctly )

// declaration
void greeting();
int get_the_number();
void guess_the_number(int correct);
void play_game();

void greeting()
{
	cout << "Welcome to Guess My Number Game!" << endl;
	cout << "Do you want instructions for the game?\n";

	char choice;
	cin >> choice;
	
	if (choice == 'y' || choice == 'Y')
	{
		
		cout << "-> I will choose a random number from 1 to 20.\n"
			 << "-> You need guess the number I chose.\n "
			 << "-> After you guess the number, Game is completed.\n\n";
	}
}

int get_the_number()
{
	srand(time(0));
	int number = rand() % 20 + 1;   // getting random number from 1 to 20
	return number;
}

void guess_the_number(int correct)
{
	int guess;
	
	cout << "Guess a number from 1 to 20\n\n";
	cin >> guess;
	

	while (guess != correct)
	{
		if (guess < correct)
		{
			cout << "You guessed too low." << endl;
		}
		else
		{
			cout << "You guessed too high." << endl;
		}
		cin >> guess;
	}
	cout << "Yes, the number was " << correct << "." << endl;
}
void play_game()
{
	int correct = get_the_number();
	guess_the_number(correct);
 }