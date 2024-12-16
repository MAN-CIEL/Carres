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
};