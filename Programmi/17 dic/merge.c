/*

-2.3 -> 0.8 -> 2.7 -> 4.1 L_	pTesta1 = -2.3
-4.0 -> 1.2 -> 2.3 -> 4.0 L_	pTesta2 = -4.0
-4.0 -> -2.3 -> 0.8 -> 1.2 -> 2.3 -> 2.7 -> 4.1 -> 4.8 L_

*/

#include <stdio.h>

typedef struct El
{
	float Dato;
	struct El *pProssimo;
} TipoElemento;

TipoElemento *Merge(TipoElemento* pTesta1, TipoElemento* pTesta2)
{
	TipoElemento* NuovoElemento;

	if ((pTesta1 == NULL) && (pTesta2 == NULL))
		return NULL;
	
	NuovoElemento = malloc(sizeof(TipoElemento));
	
	if (pTesta1 != NULL)
	{
		if (pTesta2 != NULL)
		{
			if (pTesta1->Dato < pTesta2->Dato)
			{
				NuovoElemento->Dato = pTesta1->Dato;
				NuovoElemento->pProssimo = Merge(pTesta1->pProssimo, pTesta2);
			}
			else
			{
				NuovoElemento->Dato = pTesta2->Dato;
				NuovoElemento->pProssimo = Merge(pTesta1, pTesta2->pProssimo);
			}
		}
		else
		{
			NuovoElemento->Dato = pTesta1->Dato;
			NuovoElemento->pProssimo = Merge(pTesta1->pProssimo, pTesta2);
		}
	}
	else
	{
		NuovoElemento->Dato = pTesta2->Dato;
		NuovoElemento->pProssimo = Merge(pTesta1, pTesta2->pProssimo);
	}