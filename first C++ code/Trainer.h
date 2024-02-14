#pragma once
#include "Pokemon.h"
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
	void Introduce();
	void Challenge(const Trainer& otherTrainer) const;
	void CapturePokemon(const Pokemon& wildPokemon);
	void UseAbility();
	void EarnPokeballs(int number);
	void EarnMoney(int amount);
	void TakeDamage();
	void UseCatchFrase();
	void SwitchPokemon(const string& mPokemonId);
	Ability chooseAbility(PokeType pokeType, int damageAmount, int initialUses, int remainingUses) const;
};

