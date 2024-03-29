#include <iostream>
#include "Trainer.h"
using namespace std;//To be able display the text using cout & endl / \n

int main()
{
	Trainer player;
	Trainer opponent;
	Trainer otherTrainer;
	Pokemon wildPokemon;
	PokeType pokeType;

	string fName, lName, CFrase, input;
	vector<Pokemon> pokemonTeam;

	cout << "Enter your response (yes/Yes): ";
	cin >> input;
	cout << "Enter your response (no/No): ";
	cin >> input;

	for (char& c : input) 
	{
		c = tolower(c);
	}

	cout << "Enter your first name: ";
	cin >> fName;
	player.SetFirstName(fName);

	cout << "Enter your last name: ";
	cin >> lName;
	player.SetLastName(lName);

	cout << "Hello " << fName << " " << lName << ". Welcome to my game!" << endl;
	cout << "First, enter your catchfarse that will be used during the game: " << endl;
	cin >> CFrase;
	player.SetCatchFrase(CFrase);
	cout << "Here you go! You almost ready to play (\*_*/)" << endl;
	cout << "Do you want to use your catchfrase now?" << endl;
	cin >> input;
	if (input == "yes")
	{
		player.UseCatchFrase();
	}
	else if (input == "no") 
	{
		cout << "Okay... (-_-)" << endl;
	}
	else 
	{
		cout << "Invalid input." << endl;
	}

	cout << fName << ", you need a team of 6 Pokemons to be able to fight other trainers." << endl;
	cout << "Choose the types of pokemons you want (you can have inly one pokemon of each type): " << endl;
	player.ChosePokemonsForTeam();

	cout << "Congratulations " << fName << ", now you have your team: " << endl;
	player.ListChosenPokemons();

	cout << "So what do you want to do? You can: " << endl;
	int choice;
	do {
		cout << "1. Challenge other trainer for a battle \n";
		cout << "2. Capture new Pokemon\n";
		cout << "3. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			player.Challenge(otherTrainer);
			cout << "Do you want to use your catchfrase now?" << endl;
			cin >> input;
			if (input == "yes")
			{
				player.UseCatchFrase();
			}
			else if (input == "no")
			{
				cout << "Okay... (-_-)" << endl;
			}
			else
			{
				cout << "Invalid input." << endl;
			}
			player.Fight(player, opponent);
			break;
		case 2:
			player.CapturePokemon(wildPokemon);
			break;
		case 3:
			cout << "Exiting...\n";
			break;
		default:
			cout << "Invalid choice. Please enter a valid option.\n";
		}
	} while (choice != 3);

	return 0;
}
