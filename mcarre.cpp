//TP carrés animés
//Ilan Manzari
//03/12/2024
//Fonction main
#include "carre.h"
#include <iostream>
using namespace std;

int main()
{
	CCarre carre;
	carre.Setsx(2);
	carre.Setsy(4);
	carre.Setcote(8);
	//carre.Afficher();

	/*cout << endl;
	cout << "Test des getters :" << endl;
	cout << "Coordonnee sx (via Getsx) : " << carre.Getsx() << endl;
	cout << "Coordonnee sy (via Getsy) : " << carre.Getsy() << endl;
	cout << "Longueur du cote (via Getcote) : " << carre.GetCote() << endl;*/

	carre.Deplacer('n', 4);

	// Affichage après déplacement
	cout << "Caracteristiques apres deplacement(direction et saut) :" << endl;
	carre.Afficher();
}