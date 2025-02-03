// TP3_POO_heritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Cowboy.h"
#include "Dame.h"
#include "Brigand.h"

using namespace std;

int main()
{
	Cowboy lucky("Lucky Luke", "coca-cola");
	Dame jenny("Jenny");
	Brigand joe("Joe");
	
	// 1. La rencontre...
	lucky.sePresente();
	jenny.sePresente();

	// 2. Mais un brigand arrive...
	joe.kidnappe(jenny);
	joe.sePresente();

	// 3. Heureusement le cowboy s'interpose...
	lucky.tire(joe);
	lucky.emprisonne(joe);
	lucky.libere(jenny);

	return 0;
}