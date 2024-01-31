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
	string mImage;
	int mLifePoints;
	vector<string> capabilities;
	bool inPokeball;

public:
	Pokemon(string name, string id);
	~Pokemon();
	string GetPokemonId();
	string GetName();

	void SetImage(string image);
	void SetID(string pokemonId);
	void SetDiscribtion(string discribtion);
	void SetList(string listOfCapabilities);
	void SetLifePoints(int lifePoints);

};

