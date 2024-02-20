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

void Trainer::Challenge(Trainer& otherTrainer)
{
	cout << firstName << " challenges " << otherTrainer.firstName << " to a Pokemon battle!" << endl;
}

void Trainer::CapturePokemon(Pokemon& wildPokemon)
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

void Trainer::SwitchPokemon(string& mPokemonId)
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

string GetPokemonNameForType(PokeType pokeType) 
{
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
			return "Alolan Ninetales";
			break;
		case Fighting:
			return "Lucario";
			break;
		case Poison:
			return "Toxtricity";
			break;
		case Ground:
			return "Groudon";
			break;
		case Flying:
			return "Lugia";
			break;
		case Psychic:
			return "Mewtwo";
			break;
		case Bug:
			return "Scyther";
			break;
		case Rock:
			return "Onix";
			break;
		case Ghost:
			return "Gengar";
			break;
		case Dragon:
			return "Rayquaza";
			break;
		case Dark:
			return "Tyranitar";
			break;
		case Steel:
			return "Scizor";
			break;
		case Fairy:
			return "Sylveon";
			break;
	}
}

string GetTypeName(PokeType pokeType) 
{
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

void Trainer::ListChosenPokemons() 
{
	for (int y = 0; y < pokemonTeam.size(); ++y) 
	{
		cout << y + 1 << ". " << pokemonTeam[y].GetName() << endl;
	}
}

//Pokemon& Trainer::GetActivePokemon(int activePokemonIndex)
//{
//	if (activePokemonIndex >= 0 && activePokemonIndex < pokemonTeam.size()) {
//		return pokemonTeam[activePokemonIndex];
//	}
//	else 
//	{
//		throw std::runtime_error("No active Pokemon available.");
//	}
//}

void Trainer::Fight(Trainer& trainer, Trainer& opponent)
{
//	Pokemon& playerPokemon = trainer.GetActivePokemon();
//	Pokemon& opponentPokemon = opponent.GetActivePokemon();
//
//	cout << "A wild battle begins between " << trainer.GetName() << " and " << opponent.GetName() << "!\n";
//
//	while (!trainer.AllPokemonsFainted() && !opponent.AllPokemonsFainted())
//	{
//		// Player's turn
//		cout << trainer.GetName() << "'s turn:\n";
//		// Perform actions such as choosing an ability, using items, etc.
//		trainer.UseAbility();
//		// Check if the opponent's Pokemon fainted
//		if (opponentPokemon.IsFainted()) 
//		{
//			cout << opponent.GetName() << "'s " << opponentPokemon.GetName() << " faints!\n";
//			// Switch opponent's Pokemon if available
//			opponent.SwitchPokemon();
//			opponentPokemon = opponent.GetActivePokemon();
//		}
//		else 
//		{
//			// Opponent's turn
//			cout << opponent.GetName() << "'s turn:\n";
//			// Perform actions such as using abilities, items, etc.
//			opponent.UseAbility();
//			// Check if the player's Pokemon fainted
//			if (playerPokemon.IsFainted()) {
//				cout << trainer.GetName() << "'s " << playerPokemon.GetName() << " faints!\n";
//				// Switch player's Pokemon if available
//				trainer.SwitchPokemon();
//				playerPokemon = trainer.GetActivePokemon();
//			}
//		}
//	}
//
//	// Determine the winner of the battle
//	if (player.AllPokemonsFainted()) 
//	{
//		cout << opponent.GetName() << " wins the battle!\n";
//		// Award money or items to the opponent
//		opponent.EarnMoney(100); // For example, award 100 coins
//	}
//	else 
//	{
//		cout << player.GetName() << " wins the battle!\n";
//		// Award money or items to the player
//		player.EarnMoney(100); // For example, award 100 coins
//	}
}

Ability Trainer::chooseAbility(PokeType pokeType, int damageAmount, int initialUses, int remainingUses)
{
	//TO DO
	return Ability();
}

void Trainer::OtherTrainer(vector<string> defaultNames)
{
	//// Set a random default name for the opponent
	//srand(time(0));
	//name = defaultNames[rand() % defaultNames.size()];

	//// Populate the Pokemon team with default Pokemon with random names
	//const int teamSize = 6; // Assuming a team size of 6
	//for (int i = 0; i < teamSize; ++i) {
	//	Pokemon defaultPokemon;
	//	defaultPokemon.SetName(defaultNames[rand() % defaultNames.size()]); // Set random name for the Pokemon
	//	pokemonTeam.push_back(defaultPokemon);
	//}
}

void Trainer::DefaultNames()
{

}