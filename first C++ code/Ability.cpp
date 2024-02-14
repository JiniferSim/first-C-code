#include "Ability.h"
#include <iostream>

using namespace std;

void Ability::Rest(int restTime)
{
	remainingUses = initialUses;
}

void Ability::PerformAttack()
{
	if (CanUseAbility())
	{
		cout << "Attack with " << damageAmount << " damage of pokemon type " << endl;
		switch (pokeType)
		{
		case Fire:
			cout << "Fire" << endl;
			break;
		case Water:
			cout << "Water" << endl;
			break;
		case Grass:
			cout << "Grass" << endl;
			break;
		case Electric:
			cout << "Electric" << endl;
			break;
		case Ice:
			cout << "Ice" << endl;
			break;
		case Fighting:
			cout << "Fighting" << endl;
			break;
		case Poison:
			cout << "Poison" << endl;
			break;
		case Ground:
			cout << "Ground" << endl;
			break;
		case Flying:
			cout << "Flying" << endl;
			break;
		case Psychic:
			cout << "Psychic" << endl;
			break;
		case Bug:
			cout << "Bug" << endl;
			break;
		case Rock:
			cout << "Rock" << endl;
			break;
		case Ghost:
			cout << "Ghost" << endl;
			break;
		case Dragon:
			cout << "Dragon" << endl;
			break;
		case Dark:
			cout << "Dark" << endl;
			break;
		case Steel:
			cout << "Steel" << endl;
			break;
		case Fairy:
			cout << "Fairy" << endl;
			break;
		}
		cout << "." << endl;
		remainingUses--;
	}
	else 
	{
		cout << "No remaining uses for this ability." << endl;
	}
}

void Ability::ChooseAbility(int damageAmount, int initialUses, int remainingUses, int restTime)
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

		cout << "Choose an ability: ";
		int choiceFire;
		cin >> choiceFire;

		switch (choiceFire)
		{
		case 1:
			Ability(8, 3, 3, 20); // Fire Fang
		case 2:
			Ability(damageAmount, initialUses, remainingUses, 15); // Fire Blast
		case 3:
			Ability(damageAmount, initialUses, remainingUses, 5); // Fire Punch
		case 4:
			Ability(damageAmount, initialUses, remainingUses, 10); // Flamethrowe
		}
	}

	switch (pokeType)
	{
	case Water:
		cout << "1. Bubble\n";
		cout << "2. Splash\n";
		cout << "3. Water Gun\n";
		cout << "4. Aqua Jet\n";

		int choiceWater;
		cin >> choiceWater;

		switch (choiceWater)
		{

		}
	}
}

bool Ability::CanUseAbility() const
{
	return remainingUses > 0;
}