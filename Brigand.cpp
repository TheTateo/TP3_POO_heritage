#include "Brigand.h"
#include "Dame.h"
#include "Cowboy.h"

#include <iostream>

// Constructeurs et Destructeur
Brigand::Brigand(const string nom/*=""*/, const string boissonFavorite/*="tord-boyaux"*/, const string comportement/*="méchant"*/) : Humain(nom, boissonFavorite), comportement(comportement), nbDamesEnlevees(0), recompense(0), enPrison(false)
{
}

// Accesseurs
string Brigand::getComportement() const
{
	return comportement;
}

int Brigand::getNbDamesEnlevees() const
{
	return nbDamesEnlevees;
}

int Brigand::getRecompense() const
{
	return recompense;
}

// Services
void Brigand::sePresente()
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << " le " << getComportement() << " et j'aime le " << getBoissonFavorite() << "." << endl;
	cout << "(" << nom << ") -- " << "J'ai l'air " << getComportement() << " et j'ai deja kidnappe " << getNbDamesEnlevees() << " dames !" << endl;
	cout << "(" << nom << ") -- " << "Ma tete est mise a prix a " << getRecompense() << " $ !" << endl;
}

void Brigand::kidnappe(Dame & dame)
{
	if (!estEnPrison())
	{
		dame.seFaitKidnapper();
		nbDamesEnlevees++;
		augmenteRecompense();
		cout << "(" << nom << ") -- " << "Ah ah! " << dame.getNom() << ", tu es mienne desormais!" << endl;
	}
}

void Brigand::sefaitEmprisonne(Cowboy & cowboy)
{
	if (!estEnPrison())
	{
		enPrison = true;
		cout << "(" << nom << ") -- " << "Damned, je suis fait! " << cowboy.getNom() << ", tu m'as eu!" << endl;
	}
}

void Brigand::augmenteRecompense(const int prix)
{
	if (prix > 0) this->recompense += prix;
}

void Brigand::diminueRecompense(const int prix)
{
	if (prix > 0 && prix <= recompense) this->recompense -= prix;
}

bool Brigand::estEnPrison()
{
	return enPrison;
}
