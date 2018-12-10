void EliminaCentrale(ElemLista **ppTesta)	/* Riceve in ingresso un puntatore e non il valore effettivo per la possibile eliminazione del primo elemento */
{											/* void perché dev'essere una procedura, quindi non può essere una funzione che restituisce una testa */
	ElemLista *pCentrale, *pDaEliminare;
	int ContaPassi;
	ElemLista **ppPuntDaElim;
	
	if (*ppTesta == NULL)
		return;
	else
	{
		pCorrente = (*ppTesta)->pProssimo;
		ContaPassi = 1;
		ppPuntDaElim = ppTesta;
	}
	
	while (pCorrente != NULL)
	{
		if (ContaPassi == -1)
			ppPuntDaElim = &((*ppPuntDaElim)->pProssimo);
		
		ContaPassi *= -1;
		pCorrente = pCorrente->pProssimo;
	}
	
	pDaEliminare = *ppPuntDaElim;
	*ppPuntDaElim = pDaEliminare->pProssimo;
	free(pDaEliminare);
}

/* La difficoltà sta nel creare un algoritmo per una sola scansione: utilizzare il passaggio per puntatore (sul puntatore) perché potrebbe eliminare l'elemento puntato dal primo puntatore, e gestire il doppio puntatore */ 

/* Chiamata in main: EliminaCentrale(&pTesta) */
