#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pokemon
{
private:
	string mPokemonId;
	string mName;
	string mDiscribtion;
	string imagePath;
	int mLifePoints;
	vector<string> capabilities;
	bool inPokeball;

public:
	Pokemon(string name, string id);
	Pokemon(string name);
	Pokemon();
	~Pokemon();
	string GetPokemonId();
	string GetName();

	void SetID(string pokemonId);
	void SetDiscribtion(string discribtion);
	void SetList(string listOfCapabilities);
	void SetLifePoints();

	void DisplayPokemonInfo();
	void GetInOutPokeball();
	void TakeDamage(int damage);
	void Attack(Pokemon& target, int damage);
	void PassOut();
	void Heal(int healPoints);
};

