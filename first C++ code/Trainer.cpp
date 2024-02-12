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
		cout << firstName << " captures " /*<< wildPokemon.*/ << endl;
		pokemonTeam.push_back(wildPokemon);
	}
	else
	{
		cout << "Can't capture more than 6 pokemons, your team nis full, release Pokemon if you want to capture another one." << endl;
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
	cout << firstName << " - " << catchFrase << endl;
}

void Trainer::SwitchPokemon(const string& mPokemonId)
{
	for (Pokemon pokemon : pokemonTeam)
	{
		if (pokemon.GetPokemonId() == mPokemonId)
		{
			cout << firstName << " sends out " << pokemon.GetName() << endl;
			return;
		}
	}
	cout << "Pokemon with ID " << mPokemonId << " not found in the team." << endl;
}

Ability Trainer::chooseAbility(PokeType pokeType, int damageAmount, int initialUses, int remainingUses) const
{
	cout << "Available Abilities:\n";

	switch (pokeType) 
	{
	case Fire:
		cout << "1. Fire Fang\n";
		cout << "2. Fire Blast\n";
		cout << "3. Fire Punch\n";
		cout << "3. Flamethrower\n";
		break;
	}
	cout << "Choose an ability: ";
	int choice;
	std::cin >> choice;

	switch (choice) 
	{
	case 1:
		return Ability(8, 3, 3, Fire); // Fire Fang
	case 2:
		return Ability(damageAmount, initialUses, remainingUses, Fire); // Fire Blast
	case 3:
		return Ability(damageAmount, initialUses, remainingUses, Fire); // Fire Punch
	case 4:
		return Ability(damageAmount, initialUses, remainingUses, Fire); // Flamethrowe
	}
}
