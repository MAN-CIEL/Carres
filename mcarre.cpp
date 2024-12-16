//TP carrés animés
//Ilan Manzari
//03/12/2024
//Fonction main
#include "carre.h"
#include <iostream>
using namespace std;

int main()
{
	/*CCarre carre;
	carre.Setsx(2);
	carre.Setsy(4);
	carre.Setcote(8);
	carre.Afficher();

	cout << endl;
	cout << "Test des getters :" << endl;
	cout << "Coordonnee sx (via Getsx) : " << carre.Getsx() << endl;
	cout << "Coordonnee sy (via Getsy) : " << carre.Getsy() << endl;
	cout << "Longueur du cote (via Getcote) : " << carre.GetCote() << endl;*/

	/*carre.Deplacer('n', 4);

	// Affichage après déplacement
	cout << "Caracteristiques apres deplacement(direction et saut) :" << endl;
	carre.Afficher();

	// Test de la surcharge Deplacer (vecteur dx, dy)
	int dx, dy;
	cout << "\nDeplacer le carre en indiquant un vecteur de deplacement." << endl;
	cout << "Entrez le deplacement en x (dx) : ";
	cin >> dx;
	cout << "Entrez le deplacement en y (dy) : ";
	cin >> dy;

	carre.Deplacer(dx, dy);

	cout << "\nCaracteristiques apres deplacement (vecteur dx, dy) :" << endl;
	carre.Afficher();*/

	// Création d'un tableau de 4 carrés
	CCarre carres[4];

	// Initialisation des carrés avec des valeurs différentes
	/*carres[0].Setsx(5);
	carres[0].Setsy(4);
	carres[0].Setcote(10);
	carres[1].Setsx(2);
	carres[1].Setsy(3);
	carres[1].Setcote(20);
	carres[2].Setsx(1);
	carres[2].Setsy(6);
	carres[2].Setcote(25);
	carres[3].Setsx(7);
	carres[3].Setsy(8);
	carres[3].Setcote(30);
	
	// Affichage des caractéristiques de chaque carré
	cout << "Tableau de carres :" << endl;
	for (int i = 0; i < 4; ++i)
	{
		cout << "Carre " << i + 1 << ":" << endl;
		carres[i].Afficher();
		cout << endl;
	}*/

	// Initialisation des carrés avec le constructeur paramétré
	carres[0] = CCarre(10, 10, 20);
	carres[1] = CCarre(30, 40, 25);
	carres[2] = CCarre(50, 60, 30);
	carres[3] = CCarre(70, 80, 35);

	// Affichage des caractéristiques de chaque carré
	cout << "Tableau de carres :" << endl;
	for (int i = 0; i < 4; ++i)
	{
		cout << "Carre " << i + 1 << ":" << endl;
		carres[i].Afficher();
		cout << endl;
	}


	// Création d'un carré en allocation de mémoire sur le tas
	cout << "\nCreation d'un carre en allocation de memoire sur le tas:" << endl;
	CCarre* carre2 = new CCarre(100, 100, 40);

	// Test des méthodes sur ce carré 
	cout << "\nCaracteristiques de ce carre :" << endl;
	carre2->Afficher();

	cout << "\nDeplacement de ce carre vers l'est de 15 pixels." << endl;
	carre2->Deplacer('e', 15);
	carre2->Afficher();

	cout << "\nDeplacement de ce carre avec vecteur (dx=10, dy=-20)." << endl;
	carre2->Deplacer(10, -20);
	carre2->Afficher();

	// delete à la fin du carré
	cout << "\nSuppression du carre en allocation de memoire sur le tas." << endl;
	delete carre2;
}