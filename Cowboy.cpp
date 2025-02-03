#include "Cowboy.h"
#include "Brigand.h"
#include <iostream>

Cowboy::Cowboy(const string nom, const string boissonFavorite, const string titre)
	: Humain(nom, boissonFavorite), titre(titre)
{
}

int Cowboy::getPopularite()
{
	return popularite;
}

string Cowboy::getTitre()
{
	return titre;
}

void Cowboy::sePresente()
{
	cout << "(" << nom << ") -- " << " Bonjour, je suis le " << titre << " " << getNom() << " et j'aime le " << boissonFavorite << endl;
}

void Cowboy::incrementePopularite()
{
	popularite++;
}

void Cowboy::decrementePopularite()
{
	popularite--;
}

void Cowboy::tire(Brigand& brigand)
{
	cout << "(" << nom << ") -- " << "Le " << titre+" "+nom << " tire sur " << getNom() << ". PAN!" << endl;
	cout << "(" << nom << ") -- " << "Prend ca, rascal !" << endl;
}

void Cowboy::emprisonne(Brigand& brigand)
{
	brigand.sefaitEmprisonne(*this);
}

void Cowboy::libere(Dame& dame)
{
	dame.seFaitLiberer(*this);
}
