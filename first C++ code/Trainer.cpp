#include "Trainer.h"
#include "Pokemon.h"
#include "Pokemon.cpp"
#include "Ability.h"
#include "Ability.cpp"

using namespace std;

void Trainer::Introduce()
{
	cout << "Hi! I'm " << firstName << " " << lastName << ". " << catchFrase << endl;
}

void Trainer::Challenge(const Trainer& otherTrainer)
const
{
	cout << firstName << " challenges " << otherTrainer.firstName << " to a Pokemon battle!" << endl;
}

void Trainer::CapturePokemon(const Pokemon& wildPokemon)
{
	if (pokemonTeam.size() < 6)
	{
		cout << firstName << " captures " << wildPokemon.Pokemon << endl;
		pokemonTeam.push_back(wildPokemon);
	}
	else
	{

	}
}

void Trainer::UseAbility()
{

}

void Trainer::EarnPokeballs(int number)
{
	numberOfPokeballs += number;
	cout << firstName << " earns " << number << " pokeballs. Total amount of pokeballs: " << numberOfPokeballs << endl;
}

void Trainer::EarnMoney(int amount)
{
	money += amount;
	cout << firstName << " earns " << amount << " money. Total amount of money: " << money << endl;
}

void Trainer::TakeDamage()
{

}

void Trainer::UseCatchFrase()
{

}
