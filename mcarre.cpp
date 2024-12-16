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
	carre.Afficher();

	/*cout << endl;
	cout << "Test des getters :" << endl;
	cout << "Coordonnee sx (via Getsx) : " << carre.Getsx() << endl;
	cout << "Coordonnee sy (via Getsy) : " << carre.Getsy() << endl;
	cout << "Longueur du cote (via Getcote) : " << carre.GetCote() << endl;*/

	/*carre.Deplacer('n', 4);

	// Affichage après déplacement
	cout << "Caracteristiques apres deplacement(direction et saut) :" << endl;
	carre.Afficher();*/

	// Test de la surcharge Deplacer (vecteur dx, dy)
	int dx, dy;
	cout << "\nDeplacer le carre en indiquant un vecteur de deplacement." << endl;
	cout << "Entrez le deplacement en x (dx) : ";
	cin >> dx;
	cout << "Entrez le deplacement en y (dy) : ";
	cin >> dy;

	carre.Deplacer(dx, dy);

	cout << "\nCaracteristiques apres deplacement (vecteur dx, dy) :" << endl;
	carre.Afficher();


}