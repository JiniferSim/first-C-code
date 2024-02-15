#include <iostream>
#include "Trainer.h"
using namespace std;//To be able display the text using cout & endl / \n

int main()
{
	Trainer player;
	string fName, lName, CFrase, input;

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

	return 0;
}
