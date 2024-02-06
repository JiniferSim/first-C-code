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

public:
	bool canUseAbility()const;
	void rest();
	void PerformAttack();

	static const Ability TACKLE;
	static const Ability EMBER;
	static const Ability WATER_GUN;
	static const Ability THUNDER_SHOCK;
};

