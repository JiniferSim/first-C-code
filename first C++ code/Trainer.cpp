#include "Trainer.h"

using namespace std;

void Trainer::SetCatchFrase(string CFrase)
{
	catchFrase = CFrase;
}

void Trainer::SetFirstName(string fName)
{
	firstName = fName;
}

void Trainer::SetLastName(string lName)
{
	lastName = lName;
}

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
	cout << "Select a Pokemon to use an ability:" << endl;
	string pokemonName;
	cin >> pokemonName;
	//Trainer::SwitchPokemon(const string & mPokemonId);

	cout << "Select an ability for the chosen Pokemon:" << endl;
	//Trainer::chooseAbility(PokeType pokeType, int damageAmount, int initialUses, int remainingUses) const;
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

void Trainer::TakeDamage(int damage)
{
	lifePoints -= damage;
	cout << firstName << " " << lastName << " takes " << damage << " damage. Life points: " << lifePoints << endl;
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
	//TO DO
	return Ability();
}
