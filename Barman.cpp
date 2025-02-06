#include "Barman.h"
#include <iostream>

Barman::Barman(const string nom, const string boissonFavorite, const string nomBar) : Humain(nom, boissonFavorite), nomBar(nomBar)
{
}

string Barman::getNomBar()
{
	return nomBar;
}

void Barman::sePresente()
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << " le barman du " << getNomBar() << " et j'aime la " << getBoissonFavorite() << terminePhrase() << endl;
}

void Barman::Sert(Humain& client)
{
	cout << "(" << nom << ") -- " << "Tiens " << client.getNom() << ", un verre de " << client.getBoissonFavorite() << terminePhrase() << endl;
}

string Barman::terminePhrase()
{
	return " mon gars.";
}
