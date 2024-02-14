#pragma once
#include <string>

enum PokeType
{
	Fire,
	Water,
	Grass,
	Electric,
	Ice,
	Fighting,
	Poison,
	Ground,
	Flying,
	Psychic,
	Bug,
	Rock,
	Ghost,
	Dragon,
	Dark,
	Steel,
	Fairy
};

class Ability
{
private:
	int damagePoints;
	PokeType pokeType; 
	int amountOfUses;
	bool canUseAbility;
	int damageAmount;
	PokeType pokeType;
	int initialUses;
	int remainingUses;
	/*AbilityVariant(int damageAmount, PokeType pokeType, int initialUses, int remainingUses);*/

public:
	bool canUseAbility()const;
	void rest(int restTime);
	void PerformAttack();
	void ChooseAbility(int damageAmount, int initialUses, int remainingUses, int restTime);

	/*static const Ability::PokeType{ Fire(FireFang, FireBlast, FirePunch, Flamethrower) };*/
};

