#pragma once
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
	void FirstName();
	void LastName();
	void EarnMoney();
	void TakeDamage();
	void UseCatchFrase();

};

