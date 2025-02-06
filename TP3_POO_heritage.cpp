// TP3_POO_heritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Cowboy.h"
#include "Dame.h"
#include "Brigand.h"
#include "Barman.h"
#include "Sherif.h"

using namespace std;

void presentezVous(Humain& humain)
{
	humain.sePresente();
}


int main()
{
	Cowboy lucky("Lucky Luke", "coca-cola");
	Dame jenny("Jenny");
	Brigand joe("Joe");
	Barman robert("Robert");
	Sherif clint("Clint", "eau",100);
	
	// 1. les presentations des personnages
	presentezVous(lucky);
	presentezVous(jenny);
	presentezVous(joe);
	presentezVous(robert);
	presentezVous(clint);

	robert.Sert(lucky);
	robert.Sert(jenny);
	robert.Sert(joe);

	joe.augmenteRecompense();
	clint.recherche(joe);
	clint.emprisonne(joe);
	joe.sefaitEmprisonne(clint);


	return 0;
}