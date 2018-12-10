#include <stdio.h>

typedef struct El
{
	char *Dato;
	struct El *Prossimo;
} TipoElemento;

TipoElemento* CercaCaratteri(char *Stringa, char CarDaCercare)
{
	TipoElemento *pTesta, *pUltimoAggiunto;
	int PosCorr;
	pTesta = NULL;
	PosCorr = 0;

	while ('.' != Stringa[PosCorr])
	{
		if (CarDaCercare == Stringa[PosCorr])
		{
			if (pTesta == NULL)
			{
				pTesta = malloc(sizeof(TipoElemento));
				pTesta->Dato = &(Stringa[PosCorr]);
				pTesta->pProssimo = NULL;
				pUltimoAggiunto = pTesta;
			}
			else
			{
				pUltimoAggiunto->pProssimo = malloc(sizeof(TipoElemento));
				pUltimoAggiunto = pUltimoAggiunto->pProssimo;
				pUltimoAggiunto->Dato = &Stringa[PosCorr];
				pUltimoAggiunto->pProssimo = NULL;
			}
		}
		
		PosCar++;
	}

	return pTesta;
}

int main()
{
	TipoElemento *pCorrente;

	//

	pCorrente = CercaCaratteri("Ciao ", 'a'):

	return 0;
}