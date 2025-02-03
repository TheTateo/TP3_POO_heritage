#pragma once
#include "Humain.h"

class Dame;
class Brigand;

class Cowboy :
	public Humain
{
private:
	int popularite;
	const string titre;
public:
	Cowboy(const string nom = "Lucky Luke", const string boissonFavorite = "whisky", const string titre = "vaillant");
	
	int getPopularite();
	string getTitre();

	void setPopularite(const int popularite);
	void setQualite(const string qualite);

	void sePresente();
	void incrementePopularite();
	void decrementePopularite();
	void tire(Brigand& brigand);
	void emprisonne(Brigand& brigand);
	void libere(Dame& dame);
};

