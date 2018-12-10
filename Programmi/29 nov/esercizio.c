#include <stdio.h>
#include <stdlib.h>

typedef struct Elemento
{
	char Dato;
	struct Elemento *pProssimo;
} ElemLista;

void InvertiElemento(ElemLista **ppTesta)	/* Metodo utilizzato: scansiono la lista e inserisco ogni elemento in testa in una nuova lista */
{											/* Metodo alternativo: prendo gli elementi della lista vecchia e li riarrangio nell'altro ordine */
	ElemLista *pNuovaTesta, *pNuovaTestaPrec, *pCorrenteVecchia, *pDaDeallocare;
	pNuovaTesta = NULL;
	pCorrenteVecchia = *ppTesta;

	while (NULL != pCorrenteVecchia)
	{
		pNuovaTestaPrec = pNuovaTesta;
		pNuovaTesta = malloc(sizeof(ElemLista));
		pNuovaTesta->Dato = pCorrenteVecchia->Dato;
		pNuovaTesta->pProssimo = pNuovaTestaPrec;
		pCorrenteVecchia = pCorrenteVecchia->pProssimo;
	}
	
	pCorenteVecchia = *ppTesta;

	while (pCorrenteVecchia != NULL)
	{
		pDaDeallocare = pCorrenteVecchia;
		pCorrenteVecchia = pCorrenteVecchia->pProssimo;
		free(pDaDeallocare);
	}

	*ppTesta = pNuovaTesta;
}
