// TP3_POO_heritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Humain.h"

using namespace std;

int main()
{
	Humain lucky("Lucky Luke", "coca-cola");
	lucky.sePresente();
	lucky.boit();

	Humain* joe = new Humain("Joe");
    cout << "Une histoire sur " << joe->getNom() << endl;
	joe->setBoissonFavorite("whisky");
	joe->sePresente();
	joe->boit();

	return 0;
}