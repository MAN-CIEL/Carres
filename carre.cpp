//"carre.cpp"
//Implémentation des méthodes de la classe
#include "carre.h"
#include <iostream> 
using namespace std;

void CCarre::Setsx(int sx1)
{
	sx = sx1;
}

void CCarre::Setsy(int sy1)
{
	sy = sy1;
}

void CCarre::Setcote(int cote1)
{
	cote = cote1;
}

void CCarre::Afficher()
{
	cout << "Caracteristiques du carre:" << endl;
	cout << "Coordonnee sx: " << sx << endl;
	cout << "Coordonnee sy: " << sy << endl;
	cout << "Longueur du cote: " << cote << " pixels" << endl;
}
