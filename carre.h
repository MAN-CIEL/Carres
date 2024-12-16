#pragma once
//"carre.h"
//D�claration de la classe

class CCarre
{
private:
	int sx, sy, cote;

public:

	// M�thode pour d�finir la valeur de sx en lui affectant la valeur de sx1
	// Pas de valeur d'entr�e et de sortie, sx en valeur de retour
	void Setsx(int sx1);

	// M�thode pour d�finir la valeur de sy en lui affectant la valeur de sy1
	// Pas de valeur d'entr�e et de sortie, sy en valeur de retour
	void Setsy(int sy1);

	// M�thode pour d�finir la valeur de cote
	// Pas de valeur d'entr�e et de sortie, cote en valeur de retour
	void Setcote(int cote1);


	// M�thode pour afficher les caract�ristiques du carr�
	// Valeur de sx, sy et cote en sortie
	void Afficher();

	// M�thode qui retourne sx
	// Sans entr�e ni sortie, valeur de sx en retour
	int Getsx();

	// M�thode qui retourne sy
	// Sans entr�e ni sortie, valeur de sy en retour
	int Getsy();

	// M�thode qui retourne cote
	// Sans entr�e ni sortie, valeur de cote en retour
	int GetCote();
	
	// "D�place" le carr� sans le dessiner. 
	// Les attributs x et y sont modifi�s en ajoutant ou retranchant la valeur de saut en fonction de la direction
	// par ex direction nord saut=2 y=y-2 
	// Entr�es : 
	//  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
	//   - saut : nombre de pixels de d�placement du carr� 
	// Sortie : Aucune 
	void Deplacer(char direction, int saut);

	// Surcharge : d�placement en fonction d'un vecteur dx, dy
	// Entr�es : coordonn�es d'un vecteur de d�placement soit dx et dy qui s'ajouteront aux coordonn�es de la position du sommet du carr�
	void Deplacer(int dx, int dy);
};