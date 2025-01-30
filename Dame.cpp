#include "Dame.h"
#include <iostream>
using namespace std;

Dame::Dame(const string nom, const string boissonFavorite, const string couleurRobe) : Humain(nom, boissonFavorite), couleurRobe(couleurRobe), etat("libre")
{

}

string Dame::getNom() const
{
	return "Miss "+nom;
}

string Dame::getEtat() const
{
	return etat;
}

void Dame::changeDeRobe(const string couleurRobe)
{
	this->couleurRobe = couleurRobe;
	cout << "(" << nom << ") -- " "Regardez ma nouvelle robe " << couleurRobe << "!" << endl;
}

void Dame::sePresente()
{
	cout << "(" << nom << ") -- " << " Bonjour, je suis " << getNom() << " et j'ai une jolie robe " << couleurRobe << endl;
}