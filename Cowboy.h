#pragma once
#include "Humain.h"
class Cowboy :
	public Humain
{
private:
	const string titre;
public:
	Cowboy(const string nom = "Lucky Luke", const string boissonFavorite = "whisky", const string titre = "vaillant");
	void sePresente();
};

