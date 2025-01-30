#include <string>

using namespace std;

#pragma once
class Humain
{
protected:
	string nom;
	string boissonFavorite;

public:
	Humain();
	Humain(const string nom, const string boissonFavorite = "eau");
	void sePresente();
	void boit();
	void parle(const string texte);
	string getNom();
	string getBoissonFavorite() const;
	void setBoissonFavorite(const string nouvelleBoissonFavorite);
	
};
