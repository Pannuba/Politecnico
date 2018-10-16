#define FATTORE_CONVERSIONE (110/30)			// Serve a convertire un voto in 30simi nello stesso voto in centesimi
												// Parentesi per sicurezza (se + e no parentesi... ahia...)
												// define = sostituire semplicemente
#include <stdio.h>								// Direttiva del preprocessore (anche sopra)

int main(){										// Prima vanno le dichiarazioni delle variabili, poi le istruzioni
	
	float m, ml, pl, s;							// m = media esami
	int nl, max;
	char Tt, L;
	scanf("%f", &m);
	scanf("%d", &nl);
	scanf("%*c%c", &Tt);
	//ml = m * 3.66666667;						Meglio sostituire il numero con FATTORE_CONVERSIONE così si capisce
	ml = m * FATTORE_CONVERSIONE;
	
	/*
	
	float F; int I; I = 3; F = 4.75;
	I = F; dopo l'assegnamento I = 4, avviene automaticamente l'approssimazione per difetto
	
	*/
	
	if ('t' == Tt)
		pl = ml + 4.0;
	
	else
		pl = ml + 7.0;
	
	s = 113.0 - 0.5 * ml;
	
	if (s < 111.0)
		s = 111.0;
	
	if (pl >= s)
		L = 'L';
	
	else
		L = ' ';
	
	max = pl;					// Operazione di arrotondamento
	
	if (pl - max >= 0.5)
		max = max + 1;
	
	if (max > 110)
		max = 110;
	
	printf("\n%d%c\n", max, L); // Come main, non è una parte integrante di C, ma una funzione definita in stdio
	return 0;
}
