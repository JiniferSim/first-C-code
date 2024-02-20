#pragma once
#include "Pokemon.h"
#include "Ability.h"

class Trainer
{
private:
	string firstName;
	string lastName;
	string catchFrase;
	int money;
	int lifePoints;
	int numberOfPokeballs;
	vector<Pokemon> pokemonTeam;
	vector<string> defaultNames;
	string name;
	int activePokemonIndex;

public:
	void SetCatchFrase(string CFrase);
	void SetFirstName(string fName);
	void SetLastName(string lName);
	void Introduce();
	void Challenge(Trainer& otherTrainer);
	void CapturePokemon(Pokemon& wildPokemon);
	void UseAbility();
	void EarnPokeballs(int number);
	void EarnMoney(int amount);
	void TakeDamage(int damage);
	void UseCatchFrase();
	void SwitchPokemon(string& mPokemonId);
	void ChosePokemonsForTeam();
	Ability chooseAbility(PokeType pokeType, int damageAmount, int initialUses, int remainingUses);
	void ListChosenPokemons();
	void Fight(Trainer& player, Trainer& opponent);
	Pokemon& GetActivePokemon(int activePokemonIndex);

	void OtherTrainer(vector<string> defaultNames);
	void DefaultNames();
};

