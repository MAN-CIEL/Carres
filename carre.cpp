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

int CCarre::Getsx()
{
	return sx;
}

int CCarre::Getsy()
{
	return sy;
}

int CCarre::GetCote()
{
	return cote;
}

void CCarre::Deplacer(char direction, int saut)
{
    switch (direction)
    {
    case 'n': // Nord
        sy -= saut;
        break;
    case 's': // Sud
        sy += saut;
        break;
    case 'o': // Ouest
        sx -= saut;
        break;
    case 'e': // Est
        sx += saut;
        break;
    }
}
