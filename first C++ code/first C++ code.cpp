#include <iostream>
#include "Trainer.h"
using namespace std;//To be able display the text using cout & endl / \n

void EarnMoney(int* wallet, int wage)
{
	//wallet = wallet + wage
	//Change the int value at address wallet, pointing to money 
	*wallet += wage;
	*wallet -= (int)(wage / 4);
}
void EarnMoneyByRef(int& wallet, int wage)
{
	//wallet = wallet + wage
	//Change the int value at address wallet, pointing to money 
	wallet += wage;
	wallet -= (int)(wage / 4);
}

int main()
{
   //cout << "What is your name?" << endl; //Display th text
   //string name;
   //cin >> name;
   //cout << "Hello " << name << ", how are you today?\n";

   //int money = 1000;
   //int* bankAccount = &money;

   //cout << "The value " << money << " is stored in address" << &money << endl;
   //cout << "The value " << name << " is stored in address" << &name << endl;
   //cout << "You can find my money at this address : " << bankAccount << endl;
   //cout << "You can find my bank at this address : " << &bankAccount << endl;
   //EarnMoney(bankAccount, 10000);
   //EarnMoneyByRef(money, 1000);
   //EarnMoneyByRef(*bankAccount, 100);
   //cout << "Thank you for the 10000, now I have " << money;

	/*cout << "Hello brave pokemon trainer. What is your name?" << endl;
	string trainerName;
	cin >> trainerName;
	cout << "Nice to meet you " << trainerName << ", lets begin!" << endl;*/
	/*cout << "Enter your Pokemon name:" << endl;
	string mName;
	cin >> mName;
	cout << "So your first pokemon is " << mName << endl;
	Pokemon nani = Pokemon();
	Pokemon pokemon (mName);
	Pokemon bulbazure ("Bulbie");
	pokemon.DisplayPokemonInfo();
	bulbazure.DisplayPokemonInfo();
	nani.DisplayPokemonInfo();
	pokemon.GetInOutPokeball();*/

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

	cout << "Hello " << fName << " " << lName << " . Welcome to my game!" << endl;
	cout << "First, enter your catchfarse that will be used during the game: " << endl;
	cin >> CFrase;
	player.SetCatchFrase(CFrase);
	cout << "Here you go! Now you ready to play (\*_*/)" << endl;
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

	player.UseCatchFrase();
	//player.Introduce();

	return 0;
}
