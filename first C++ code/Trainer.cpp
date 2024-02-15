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

string GetPokemonNameForType(PokeType pokeType) {
	switch (pokeType)
	{
		case Fire:
			return "Charizard";
			break;
		case Normal:
			return "Evee";
			break;
		case Water:
			return "Greninja";
			break;
		case Grass:
			return "Decidueye";
			break;
		case Electric:
			return "Pikachu";
			break;
		case Ice:
			cout << "Alolan Ninetales" << endl;
			break;
		case Fighting:
			cout << "Lucario" << endl;
			break;
		case Poison:
			cout << "Toxtricity" << endl;
			break;
		case Ground:
			cout << "Groudon" << endl;
			break;
		case Flying:
			cout << "Lugia" << endl;
			break;
		case Psychic:
			cout << "Mewtwo" << endl;
			break;
		case Bug:
			cout << "Scyther" << endl;
			break;
		case Rock:
			cout << "Onix" << endl;
			break;
		case Ghost:
			cout << "Gengar" << endl;
			break;
		case Dragon:
			cout << "Rayquaza" << endl;
			break;
		case Dark:
			cout << "Tyranitar" << endl;
			break;
		case Steel:
			cout << "Scizor" << endl;
			break;
		case Fairy:
			cout << "Sylveon" << endl;
			break;
	}
}

string GetTypeName(PokeType pokeType) {
	switch (pokeType)
	{
	case Fire:
		return "Fire";
		break;
	case Normal:
		return "Normal";
		break;
	case Water:
		return "Water";
		break;
	case Grass:
		return "Grass";
		break;
	case Electric:
		return "Electric";
		break;
		case Ice:
		return "Ice";
		break;
	case Fighting:
		return "Fighting";
		break;
	case Poison:
		return "Poison";
		break;
	case Ground:
		return "Ground";
		break;
	case Flying:
		return "Flying";
		break;
	case Psychic:
		return "Psychic";
		break;
	case Bug:
		return "Bug";
		break;
	case Rock:
		return "Rock";
		break;
	case Ghost:
		return "Ghost";
		break;
	case Dragon:
		return "Dragon";
		break;
	case Dark:
		return "Dark";
		break;
	case Steel:
		return "Steel";
		break;
	case Fairy:
		return "Fairy";
		break;
	}
}

void Trainer::ChosePokemonsForTeam()
{
	cout << "Available Types:\n";
	int typesCount = 18;
	
	for (int t = 0; t < typesCount; t++) {
		PokeType type = (PokeType)t;
		cout<<"*  "<<t<<"  " << GetTypeName(type) << endl;
	}
	bool chosenOnes[18]{ false };
	for (int i = 0; i < 6; i++) {
		int choicePokemon = -1;

		do {
			cout << "Choose pokemon # " << pokemonTeam.size() + 1 << " / 6 : ";
			cin >> choicePokemon;
		} while ((choicePokemon < 0 && choicePokemon > typesCount) || chosenOnes[choicePokemon]);

		chosenOnes[choicePokemon] = true;
		string pokeName = GetPokemonNameForType((PokeType)choicePokemon);
		Pokemon chosenOne(pokeName);
		pokemonTeam.push_back(chosenOne);
		cout << "You have added " << pokeName << " to your team !" << endl;
	}
	cout << "Your team is full!" << endl;
		//pokemonTeam.push_back(Pokemon(mPokemonId));
}

Ability Trainer::chooseAbility(PokeType pokeType, int damageAmount, int initialUses, int remainingUses) const
{
	//TO DO
	return Ability();
}
