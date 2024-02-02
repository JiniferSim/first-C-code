#include "Pokemon.h"
#include "Ability.h"
#include "Ability.cpp"
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

void Pokemon::SetLifePoints(int lifePoints)
{

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


