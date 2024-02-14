#include "Pokemon.h"
#include "Ability.h"

void Pokemon::DisplayPokemonInfo()
{
	cout << "Name: " << mName << endl;
	cout << "Id: " << mPokemonId << endl;
	cout << "lifePoints " << mLifePoints << endl;
	cout << "Capabilities: ";
	for (const auto& capability : capabilities) 
	{
	cout << " - " << capability << "\n";
	}
	cout << "\n";
}

void Pokemon::SetLifePoints()
{
	mLifePoints = mLifePoints;
}

void Pokemon::GetInOutPokeball()
{
	inPokeball = !inPokeball;
	if (inPokeball)
	{
		cout << "goes into Pokeball. \n";
	}
	else
	{
		cout << "comes out of Pokeball. \n";
	}
}

void Pokemon::TakeDamage(int damage)
{
	if (!inPokeball)
	{
		mLifePoints -= damage;
		if (mLifePoints >= 0)
		{
			PassOut();
		}
		else
		{
			cout << mName << "takes " << damage << " points of damage. Current life points" << mLifePoints << endl;
		}
	}
	else
	{
		cout << "Inside of the pokeball " << mName << " doesn't take damage!" << endl;
	}
}

void Pokemon::Attack(Pokemon& target, int damage)
{
	if (!inPokeball)
	{
		cout << mName << " attaks " << target.GetName() << " with " << damage << " damage. \n";
		target.TakeDamage(damage);
	}
	else
	{
		cout << mName << " can not attak from the pokeball." << endl;
	}
}

void Pokemon::PassOut()
{
	cout << mName << "passes out" << endl;
	mLifePoints = 0;
}

void Pokemon::Heal(int healPoints)
{
	if (!inPokeball)
	{
		mLifePoints = mLifePoints + healPoints;
		cout << mName << " is healed for " << healPoints << ", current life points: \n" << mLifePoints;
	}
	else
	{
		cout << mName << " is in Pkeball and can't be healed." << endl;
	}
}

void Pokemon::ChooseAbility(int damageAmount, int initialUses, int remainingUses, int restTime)
{
	cout << "Available Abilities:\n";

	switch (pokeType)
	{
	case Fire:
		cout << "1. Fire Fang\n";
		cout << "2. Fire Blast\n";
		cout << "3. Fire Punch\n";
		cout << "4. Flamethrower\n";
		break;

		cout << "Choose an ability: ";
		int choiceFire;
		cin >> choiceFire;

		switch (choiceFire)
		{
		case 1:
			ability(8, 3, 3, 20); // Fire Fang
		case 2:
			ability(damageAmount, initialUses, remainingUses, 15); // Fire Blast
		case 3:
			ability(damageAmount, initialUses, remainingUses, 5); // Fire Punch
		case 4:
			ability(damageAmount, initialUses, remainingUses, 10); // Flamethrowe
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

void Pokemon::ability(int damageAmount, int initialUses, int remainingUses, int restTime)
{
	// Save ability information to the class member variables
	currentAbility.damageAmount = damageAmount;
	currentAbility.initialUses = initialUses;
	currentAbility.remainingUses = remainingUses;
	currentAbility.restTime = restTime;
}

void Pokemon::displayAbilityInfo()
{
	cout << "Damage Amount: " << currentAbility.damageAmount << "\n";
	cout << "Initial Uses: " << currentAbility.initialUses << "\n";
	cout << "Remaining Uses: " << currentAbility.remainingUses << "\n";
	cout << "Rest Time: " << currentAbility.restTime << "\n";
}

Pokemon::Pokemon(string name, string id)
{
	mName = name;
	mPokemonId = id;

}

Pokemon::Pokemon(string name)
{
	mName = name;
	mPokemonId = "Default";
}

Pokemon::Pokemon()
{
	mName = "Default";
	mPokemonId = "Default";
}

Pokemon::~Pokemon()
{
}

string Pokemon::GetPokemonId()
{
	return mPokemonId;
}

string Pokemon::GetName()
{
	return mName;
}

void Pokemon::SetID(string pokemonId)
{
	
}

void Pokemon::SetDiscribtion(string discribtion)
{

}

void Pokemon::SetList(string listOfCapabilities)
{

}
