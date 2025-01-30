#include <string>

using namespace std;

#pragma once
class Humain
{
private:
	string nom;
	string boissonFavorite;

public:
	Humain(const string nom, const string boissonFavorite = "eau");
	void sePresente();
	void boit();
	void parle(const string texte);
	void getNom();
	string getBoissonFavorite() const;
	void setBoissonFavorite(const string nouvelleBoissonFavorite);
	
};

