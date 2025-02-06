#pragma once
#include "Humain.h"
class Barman :
	public Humain
{
private:
	string nomBar;

public:
	Barman(const string nom = "", const string boissonFavorite = "biere", const string nomBar = "Saloon Robert");
	
	string getNomBar();
	
	//void parle(const string texte);
	void sePresente();
	void Sert(Humain& client);
	string terminePhrase();
};

