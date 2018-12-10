/*  1111 00 11111 000000 11 00 1 0... - 4 2 5 7 2 2 1 1...
	-->[ 4 | -]-> [ 2 | -]-> ...
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct El
{
	int Dato;
	struct El *Prossimo;
} ElemLista;

typedef ElemLista *Binario;
typedef ElemLista *RLC;

RLC CalcolaRLC(Binario NumBin)
{
	Binario Cursore;
	RLC Testa;
	int CifraCorrente;

	if (NumBin == NULL)
		return NULL;
	
	Testa = malloc(sizeof(ElemLista));
	Testa->Dato = 0;
	CifraCorrente = NumBin->Dato;
	Cursore = NumBin;

	do
	{
		(Testa->Dato)++;
		Cursore = Cursore->Prossimo;
	} while ((Cursore != NULL) && (CifraCorrente == Cursore->Dato));	//  Cursore non punterà mai a NULL (primo if). Prima parte lista non finita; l'ordine delle due è cruciale perché darebbe errore

	Testa->Prossimo = CalcolaRLC(Cursore);
	return Testa;
}

int main()
{
	return 0;
}