#pragma once
//"carre.h"
//Déclaration de la classe

class CCarre
{
private:
	int sx, sy, cote;

public:

	// Méthode pour définir la valeur de sx en lui affectant la valeur de sx1
	// Pas de valeur d'entrée et de sortie, sx en valeur de retour
	void Setsx(int sx1);

	// Méthode pour définir la valeur de sy en lui affectant la valeur de sy1
	// Pas de valeur d'entrée et de sortie, sy en valeur de retour
	void Setsy(int sy1);

	// Méthode pour définir la valeur de cote
	// Pas de valeur d'entrée et de sortie, cote en valeur de retour
	void Setcote(int cote1);


	// Méthode pour afficher les caractéristiques du carré
	// Valeur de sx, sy et cote en sortie
	void Afficher();

	// Méthode qui retourne sx
	// Sans entrée ni sortie, valeur de sx en retour
	int Getsx();

	// Méthode qui retourne sy
	// Sans entrée ni sortie, valeur de sy en retour
	int Getsy();

	// Méthode qui retourne cote
	// Sans entrée ni sortie, valeur de cote en retour
	int GetCote();
	
	// "Déplace" le carré sans le dessiner. 
	// Les attributs x et y sont modifiés en ajoutant ou retranchant la valeur de saut en fonction de la direction
	// par ex direction nord saut=2 y=y-2 
	// Entrées : 
	//  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
	//   - saut : nombre de pixels de déplacement du carré 
	// Sortie : Aucune 
	void Deplacer(char direction, int saut);

	// Surcharge : déplacement en fonction d'un vecteur dx, dy
	// Entrées : coordonnées d'un vecteur de déplacement soit dx et dy qui s'ajouteront aux coordonnées de la position du sommet du carré
	void Deplacer(int dx, int dy);
};