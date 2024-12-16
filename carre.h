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
};