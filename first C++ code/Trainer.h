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

public:
	void SetCatchFrase(string CFrase);
	void SetFirstName(string fName);
	void SetLastName(string lName);
	void Introduce();
	void Challenge(const Trainer& otherTrainer) const;
	void CapturePokemon(const Pokemon& wildPokemon);
	void UseAbility();
	void EarnPokeballs(int number);
	void EarnMoney(int amount);
	void TakeDamage(int damage);
	void UseCatchFrase();
	void SwitchPokemon(const string& mPokemonId);
	void ChosePokemonsForTeam();
	Ability chooseAbility(PokeType pokeType, int damageAmount, int initialUses, int remainingUses) const;

	void ListChosenPokemons();
};

