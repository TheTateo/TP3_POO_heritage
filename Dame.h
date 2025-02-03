#pragma once
#include "Humain.h"

class Cowboy;


class Dame :
	public Humain
{
public:
	Dame(const string nom = "", const string boissonFavorite = "lait", const string couleurRobe = "blanche");
	
	string getNom() const;
	string getEtat() const;
	
	void sePresente();
	void changeDeRobe(const string couleurRobe);
	void seFaitKidnapper();
	void seFaitLiberer(Cowboy& cowboy);
	void hurle();
	void remercie(const Cowboy& heros);

private:
	string couleurRobe;
	string etat;
};

