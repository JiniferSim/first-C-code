#include "Ability.h"
#include <iostream>

using namespace std;

void Ability::rest()
{
	remainingUses = initialUses;
}

void Ability::PerformAttack()
{
	if (canUseAbility)
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

bool Ability::canUseAbility()
const
{
	return remainingUses > 0;
}

//const Ability Ability::PUNCH(20, Fire, 3);
//const Ability Ability::SHIELD(0, Fire, 5);
//const Ability Ability::DISTANCE_ATTACK(25, Fire, 2);
//const Ability Ability::SUPER_ATTACK(30, Fire, 1);