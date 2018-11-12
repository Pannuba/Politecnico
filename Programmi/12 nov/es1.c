#include <stdio.h>
#include <ctype.h>

#define CAPIENZA 10

typedef struct {
	char stringa[CAPIENZA];
	int tot;		/* Inutile, ma pazienza */
} TipoL;

int main(){
	
	TipoL lista;
	int i, j;
	
	for (i = 0; i < CAPIENZA; i++)
	
	{
		printf("Inserire il %d carattere su %d: ", i + 1, CAPIENZA);
		scanf("%c", &lista.stringa[i]); getchar();		/* Perché c'è &??? */
		
		printf("lista.stringa: %c\n", lista.stringa[i]);
		
		if (isupper(lista.stringa[i]))
		
		{
			printf("Lettera maiuscola\n");
			return 0;
		}
	}
	
	/*for (i = 0; i < CAPIENZA; i++)
	
	{
		if ((lista.stringa[i] == lista.stringa[i + 1]))
		
		{
			printf("Le lettere devono essere tutte diverse\n");
			//return 0;		/* ??? */
		//}
	//}
	//[a, b, c, d]
	for (i = 0; i < CAPIENZA; i++)
	
	{
		for (j = 0; j < CAPIENZA; j++)
		
		{
			if (lista.stringa[i] == lista.stringa[j+i+1])
			
			{
				printf("Lettera doppia\n");
				//return 0;	/*Perché se metto return dà sempre errore? */
			}
		}
	}
	
	// Io qua ho fatto il controllo per i doppioni dopo l'input. L'esercizio chiede di ignorare
	// immediatamente i doppioni e non includerli nell'array. Vedi es2.c
	
	for (i = 0; i < CAPIENZA; i++)
	
	{
		printf("%c\n", lista.stringa[i]);
	}
	
	return 0;
}
