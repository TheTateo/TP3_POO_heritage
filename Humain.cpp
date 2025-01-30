#include "Humain.h"
#include <iostream>

using namespace std;

Humain::Humain()
{
}

Humain::Humain(const string nom, const string boissonFavorite)
	:nom(nom), boissonFavorite(boissonFavorite)
{
}

void Humain::sePresente()
{
	cout << "("<< nom <<") --" <<" Bonjour, je suis " << nom << " et j'aime le " << boissonFavorite << endl;
}

void Humain::boit()
{
	cout << "(" << nom << ") --" << " Ah! un bon verre de " << boissonFavorite << "! GLOUPS !" << endl;
}

void Humain::parle(const string texte)
{
	cout << texte << endl;
}

string Humain::getNom()
{
	return nom;
}



// Assesseur get
string Humain::getBoissonFavorite() const
{
	return boissonFavorite;
}

// Manipulateur set
void Humain::setBoissonFavorite(const string nouvelleBoissonFavorite)
{
	if (!nouvelleBoissonFavorite.empty())
		boissonFavorite = nouvelleBoissonFavorite;
}
