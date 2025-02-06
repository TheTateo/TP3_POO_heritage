#pragma once
#include "Cowboy.h"

class Brigand;

class Sherif :
	public Cowboy
{
private:
	int nbBrigandCoffre;

public:
	Sherif(const string nom, const string boissonFavorite, const int nbBrigandCoffre);

	int getnbBrigandCoffre();

	void sePresente();
	void emprisonne(Brigand& brigand);
	void recherche(Brigand& brigand);
};

