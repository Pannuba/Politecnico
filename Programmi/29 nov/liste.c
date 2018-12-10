/*
Prendere una lista dinamica contenente caratteri e cancellare l'elemento centrale (N + 1) / 2 esimo.
1 elemento: considero 1+1/2 = 1. 2 elementi: 3/2 = 1.5, parte intera = 1. 3 elementi: 5/2 = 2.5, parte intera = 2

[ -]-> [  | -]-> [  | -]-> [ * |* -]-> [  | -]-> [  | -]-> ...

Prendo un puntatore, lo faccio avanzare nella lista a ogni passo, e uno che va avanti di 1 ogni 2 passi del primo puntatore.

Devo fare tutto in un loop

Passo un puntatore alla testa, se serve cambiare la teste della lista lo si può fare.
La complicazione è che se la testa la passo ome tipoElemento il contenuto di Testalista è *tipoElemento.
Se passo un puntatore tipoElemento* per accedere dovrò fare tipoElemento** (passo un puntatore a un puntatore.

Leggo una stringa di max 100 caratteri. Crea lista dinamica. Elimina elemento centrale.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_CARATTERI 100

typedef struct El
{
	char Dato;
	struct El *pProssimo;
} ElemLista;

ElemLista *CreaLista(char *ElencoCaratteri);
void StampaElementi(ElemLista *pTesta);
void StampaRiferimenti(ElemLista *pTesta);

int main()
{
	char ContenutoLista[MAX_CARATTERI + 1];
	ElemLista *pTesta, *pCorrente, *pPrecedeDaElim, *pDaEliminare;
	int ContaPassi; // +- 1
	
	scanf("%s", ContenutoLista);
	pTesta = CreaLista(ContenutoLista); // Le variabili dicharate dentro una funzione vengono deallocate quando la funzione finisce ma se crea con malloc le variabili create rimangono nello stack */
	stampaElementi(pTesta);
	
	if (pTesta != NULL)		/* Controllo che la lista non sia vuota */
	{
		pCorrente = pTesta->pProssimo;		/* pTesta[ -]-> [   | * ]	pCorrente[ * ] */
		ContaPassi = 1;
		pPrecedeDaElim = NULL;
		
		while (pCorrente != NULL)
		{
			if (ContaPassi == -1)
			{
				if (pPrecedeDaElim == NULL)
					pPrecedeDaElim = pTesta;
				else
					pPrecedeDaElim = pPrecedeDaElim->pProssimo;		/* pTesta[ -]--> [ # |  -]--> [   |  -]-@->		pCorrente[ -]--> @		pPrecedeDaElim [ -]--> # */
			}
			
			ContaPassi *= -1;
			pCorrente = pCorrente->pProssimo;
		}
		
		if (pPrecedeDaElim == NULL)		/* Eliminiamo il primo elemento */
		{
			pDaEliminare = pTesta;
			pTesta = pDaEliminare->pProssimo;
			free(pDaEliminare);
		}
		else
		{
			pDaEliminare = pPrecedeDaElim->pProssimo;
			pPrecedeDaElim->pProssimo = pDaEliminare->pProssimo;
			free(pDaEliminare);
		}
	}
	
	return 0;
}

void StampaElementi(ElemLista *ptesta);
{
	if (pTesta != NULL)		/* Se non è vuota stampa il primo carattere */
	{
		printf("%c", pTesta->Dato);
		StampaElementi(pTesta->pProssimo);
	}
}
