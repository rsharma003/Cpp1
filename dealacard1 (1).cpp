#include<iostream>
#include<vector>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{

	// This program deals a card from a deck, and removes each card from the deck as it is dealt

	// declaring variables
	int i;
	int j;
	int k;
	int index;
	char choice = 'y';

	// building vectors
	vector<string>suits = { "Diamonds", "Spades", "Hearts", "Clubs" };
	vector<string>faces = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine","Ten", "Jack", "Queen", "King" };
	vector<string>deck;

	// greeting
	cout << "Welcome to Roshan's Fabulous Deck of Cards.\n\n";

	// building deck
	for (i = 0; i < suits.size(); i++)
	{
		for (j = 0; j < faces.size(); j++)
		{
			deck.push_back(faces.at(j) + " of " + suits.at(i));
		}
	}


	// choosing random cards
	srand(time(0));

	cout << "Hi, Let's deal you a card." << endl;

	while (choice == 'y' || choice == 'Y')
		{

		index = rand() % deck.size();
		cout << "You got " << deck.at(index) << "\n\n";
		deck.at(index) = deck.back();
		deck.pop_back();

		cout << "Nice! Want another card? (y/n)" << endl;
		cin >> choice;
		cout << endl;
		}
	
	

	cout << "There are " << deck.size() << " cards remaining." << "\n\n";

	cout << "Would you like to see the rest of the deck?" << endl;
	cin >> choice;
	cout << endl;

	// asking users if they want to see remaining cards 

	if (choice == 'y' || choice == 'Y')
	{
		cout << " Here are the cards remaining";
		for (k = 0; k < deck.size(); k++)
		{
			cout << deck.at(k) << endl;
		}
		cout << endl;
	}

	cout << "Thanks for playing! Bye!\n";

	return 0;

}