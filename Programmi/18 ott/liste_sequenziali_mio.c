#include <stdio.h>
#define MAX 1000

typedef struct

{
	int lunghezza;
	char parola[MAX];
} parola;

typedef struct	/* Togliere typedef perché ce n'è solo una? */

{
	int lunghezza;
	parola datiParola[MAX];
} frase;

int main(){
	
	frase datiFrase;
	datiFrase.lunghezza = 0;
	//datiFrase.datiParola.lunghezza = 0;
	char frase[MAX] = "ciao_palla_franco.";
	int i, j, k;
	
	//for (i = 0; frase[i] != '.'; i++)		/* i = indice parole, j = indice lettere */
	
/*	{
		for (; frase[j] != '_'; j++)
		
		{
			datiFrase.datiParola[i].lunghezza++;
			datiFrase.datiParola[i].parola[j] = frase[j];
		}
		se mettessi j++ qua funzionerebbe ma fa cosa strana dei formati!!!
		ho capito: quando j >= 4 in "datiFrase.datiParola[i].parola[j] = frase[j]"
		andiamo ad accedere all'elemento parola[j] che non esiste ancora
	}*/
	
	//for (i = 0; frase[i] != '.'; i++)		/* i = indice parole, j = indice lettere */
	
	/*{
			
		for (j = 0; frase[j] != '_'; j++)
		
		{
			datiFrase.lunghezza++;
			
			for (k = 0; frase[k] != '_'; k++)
			
			{
				datiFrase.datiParola[i].lunghezza++;
				datiFrase.datiParola[i].parola[j] = frase[k];
			}
				
		}
		
	}*/
	
	for (i = 0; i < MAX ; i++)		/* i = indice parole, j = indice lettere */
	
	{
			
		for (j = 0; frase[j] != '.'; j++)
		
		{
			datiFrase.lunghezza++;
			
			for (k = 0; frase[k] != '_'; k++)
			
			{
				datiFrase.datiParola[i].lunghezza++;
				datiFrase.datiParola[i].parola[k] = frase[j];
			}
				
		}
		
	}
	
	for (i = 0; i < datiFrase.lunghezza; i++)
		printf("\n%s\t%d", datiFrase.datiParola[i].parola, datiFrase.datiParola[i].lunghezza);
	
	printf("\n");
	return 0;
}
