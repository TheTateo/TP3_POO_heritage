// TP3_POO_heritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Cowboy.h"
#include "Dame.h"

using namespace std;

int main()
{
	Cowboy joe("joe");
	Cowboy lucky("Lucky Luke");
	Dame jenny("Jenny");
	
	lucky.sePresente();
	jenny.sePresente();

	jenny.changeDeRobe("verte");
	lucky.boit();
	jenny.boit();

	/*
	Humain* joe = new Humain("Joe");
    cout << "Une histoire sur " << joe->getNom() << endl;
	joe->setBoissonFavorite("whisky");
	joe->sePresente();
	joe->boit();
	*/

	return 0;
}