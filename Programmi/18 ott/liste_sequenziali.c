#include <stdio.h>

#define LUNG_MAX_FRASE 60
#define LUNG_MAX_PAROLA 15
#define NUM_MAX_PAROLE 10
#define TERMINATORE_FRASE '.'
#define SEPARATORE_PAROLE ' '

int main(){
	
	char frase[LUNG_MAX_FRASE];
	
	typedef struct
	
	{
		char parola[LUNG_MAX_PAROLA];
		int lunghezza;
	} tipoDescParola;
	
	typedef struct /* togliere typedef */
	
	{
		tipoDescParola datiParole[NUM_MAX_PAROLE];
		int num_elementi;
	} tipoElencoParole;
	
	tipoElencoParole elencoParole;
	int indiceCorrParola, indiceCorrFrase, indiceCorrElemento;
	printf("Inserire una frase terminata da un punto ( '.' ): ");
	scanf("%s", frase);
	elencoParole.num_elementi = 0;
	indiceCorrFrase = 0;
	indiceCorrParola = 0;
	
	while (frase[indiceCorrFrase] != TERMINATORE_FRASE)
	
	{
		if (SEPARATORE_PAROLE != frase[indiceCorrFrase])
		
		{
			elencoParole.datiParole[elencoParole.num_elementi].parola[indiceCorrParola] = frase[indiceCorrFrase];
			indiceCorrParola++;
		}
		
		else
		
		{
			elencoParole.datiParole[elencoParole.num_elementi].parola[indiceCorrParola] = '\0';
			elencoParole.datiParole[elencoParole.num_elementi].lunghezza = indiceCorrParola;
			indiceCorrParola = 0;
			elencoParole.num_elementi++;
		}
		
		indiceCorrFrase++;
	}
	
	elencoParole.datiParole[elencoParole.num_elementi].parola[indiceCorrParola] = '\0';
	elencoParole.datiParole[elencoParole.num_elementi].lunghezza = indiceCorrParola;
	elencoParole.num_elementi++;
	indiceCorrElemento = 0;
	
	while (indiceCorrElemento < elencoParole.num_elementi)
	
	{
		printf("\n%s\t%d", elencoParole.datiParole[indiceCorrElemento].parola, elencoParole.datiParole[indiceCorrElemento].lunghezza);
		indiceCorrElemento++;
	}
	
	printf("\n");
	
	return 0;
}
