#include "Pokemon.h"
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
	}
	else
	{
		mLifePoints = mLifePoints;
	}
}

void Pokemon::Attack()
{

}

void Pokemon::PassOut()
{

}

void Pokemon::Heal()
{

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


