#include "Sherif.h"
#include "Brigand.h"

#include <iostream>

Sherif::Sherif(const string nom, const string boissonFavorite, int nbBrigandCoffre) : Cowboy(nom,boissonFavorite), nbBrigandCoffre(30)
{
}

int Sherif::getnbBrigandCoffre()
{
	return nbBrigandCoffre;
}

void Sherif::sePresente()
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis sherif " << getNom() << " et j'aime l' " << getBoissonFavorite() << endl;
	cout << "j'ai coffre " << getnbBrigandCoffre() << " brigands in my tres longue life !" << endl;
}

void Sherif::emprisonne(Brigand& brigand)
{
	cout << "(" << nom << ") -- " << "Au nom de la loi, je vous arrete!" << endl;

	nbBrigandCoffre++;
}

void Sherif::recherche(Brigand&brigand)
{
	cout << "** OYEZ OYEZ BRAVE GENS !! " << brigand.getRecompense() << " $ a qui arretera " << brigand.getNom() << " le brigand mort ou vif!!" << endl;
}
