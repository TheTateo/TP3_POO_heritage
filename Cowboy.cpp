#include "Cowboy.h"
#include <iostream>

Cowboy::Cowboy(const string nom, const string boissonFavorite, const string titre)
	: Humain(nom, boissonFavorite), titre(titre)
{
}

void Cowboy::sePresente()
{
	cout << "(" << nom << ") -- " << " Bonjour, je suis le " << titre << " " << getNom() << " et j'aime le " << boissonFavorite << endl;
}