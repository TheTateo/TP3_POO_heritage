#ifndef BRIGAND_H
#define BRIGAND_H


#pragma once
#include "Humain.h"
#include "Brigand.h"
#include "Dame.h"

class Dame;
class Cowboy;

class Brigand :
	public Humain
{
private:
	string comportement;
	int nbDamesEnlevees;
	int recompense;
	bool enPrison;

public:
	Brigand(const string nom = "", const string boissonFavorite = "tord-boyaux", const string comportement = "mechant");
	
	string getComportement() const;
	int getNbDamesEnlevees() const;
	int getRecompense() const;

	void sePresente();
	void kidnappe(Dame & dame);
	void sefaitEmprisonne(Cowboy & cowboy);
	void augmenteRecompense(const int prix = 100);
	void diminueRecompense(const int prix = 100);
	bool estEnPrison();
};

#endif // BRIGAND_H