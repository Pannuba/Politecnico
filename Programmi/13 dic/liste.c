/*	Input: 5 0 -3 0 5 2 0 121
	Creare lista [testa]-->(5,2)-->(0,3)-->(-3,1)-->...
	Output: testa
*/

#include <stdio.h>
#include <stdlib.h>

#define NOMEFILE "./Input.txt"

typedef struct Elem
{
	int Valore, NumOccorrenze;
	struct Elem *Prossimo;
} ElemLista;

typedef enum {false, true} bool;

ElemLista *ContaOccorrenze(FILE *Stream)
{
	ElemLista *TestaLista, *NuovoElem, *UltimoElem, *Cursore;
	int ValoreLetto, RisultatoLettura;
	bool GiaPresente;
	TestaLista = NULL;

	do
	{
		RisultatoLettura = fscanf(Stream, "%d", &ValoreLetto);

		if (RisultatoLettura == 1)
		{
			Cursore = TestaLista;
			GiaPresente = false;

			while ((Cursore != NULL) && (GiaPresente == false))
			{
				UltimoElem = Cursore;

				if (Cursore->Valore == ValoreLetto)
				{
					++Cursore->NumOccorrenze;
					GiaPresente = true;
				}

				Cursore = Cursore->Prossimo;
			}

			if (GiaPresente == false)
			{
				NuovoElem = malloc(sizeof(ElemLista));
				NuovoElem->Valore = ValoreLetto;
				NuovoElem->NumOccorrenze = 1;
				NuovoElem->Prossimo = NULL;

				if (TestaLista == NULL)
					TestaLista = NuovoElem;
				else
					UltimoElem->Prossimo = NuovoElem;
			}
		}
	} while (RisultatoLettura == 1);

	return TestaLista;
}