
#ifndef EchiquierH
#define EchiquierH

#endif

#include "Joueur.h"
#include <string>


class Echiquier{


	private:

	Joueur jNoirs;
	Joueur jBlancs;
	char tabEchiquier[8][8];
	int demiCoup;

	public:
	Echiquier();
	char LireCaseEchiquier(int ligne, int colonne);
	void InitialiserEchiquier();
	std::string VisualiserEchiquier();
	std::string Les64Caracteres();
	void ChargerEchiquierComplet(char * les64Caracteres);
	void ModifierCaseEchiquier(char cPiece, int ligne, int colonne);
	bool EstUnePieceNoir(int ligne, int colonne);
	bool EstUnePieceBlanche(int ligne , int colonne);
	bool EstVide(int ligne, int colonne);
	void ChangerLeTrait();
	bool Deplacer(int idep, int jdep,int iarr, int jarr, char piecePromotion);
	std::string Trait();
	int DemiCoup();
    void SauvegarderEchiquierBMP(char * Fichier);

};