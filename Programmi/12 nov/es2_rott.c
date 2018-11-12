#include <stdio.h>
#include <ctype.h>

#define CAPIENZA 10
#define TERMINATORE '*'

typedef enum {false, true} bool;

typedef struct {
	char stringa[CAPIENZA];
	int tot;
} TipoL;

bool isLowercaseLetter(char letter)

{printf("char: %c\n", letter);
	if (letter == 'a' || letter == 'b' || letter == 'c' || letter == 'd' || letter == 'e' ||
		letter == 'f' || letter == 'g' || letter == 'h' || letter == 'i' || letter == 'j' ||
		letter == 'k' || letter == 'l' || letter == 'm' || letter == 'n' || letter == 'o' ||
		letter == 'p' || letter == 'q' || letter == 'r' || letter == 's' || letter == 't' ||
		letter == 'u' || letter == 'v' || letter == 'w' || letter == 'x' || letter == 'y' ||
		letter == 'z')
	
		return true;
	
	else
		return false;
}

int main(){
	
	TipoL lista;
	int i, j;
	lista.tot = 0;	
	printf("Numero di caratteri della stringa? (<= 10) ");
	scanf("%d", &lista.tot);
	
	/*while (lista.tot > CAPIENZA)
	
	{
		printf("Eh no, <= 10: ");
		scanf("%d", &lista.tot);
	}*/
	//lista.tot=5;
	
	/* Se fisso lista.tot manualmente funziona. se lo prendo da input non va */
	
	/*do
	
	{
		printf("Numero di caratteri della stringa? (<= 10) ");
		scanf("%d", &lista.tot);
	} while (lista.tot > CAPIENZA);*/
	
	printf("lista.tot = %d\n", lista.tot);
	
	for (i = 0; i < lista.tot; i++)
	
	{
		printf("Inserire il %d carattere su %d: ", i + 1, lista.tot);
		scanf("%*c%c", &lista.stringa[i]);		/* Prima era %c e poi getchar. stampava l'invio dell'input e poi ignorava un carattere inesistente. In questo modo prima annulla l'invio, poi stampa il carattere */
		
		printf("lista.stringa: %s\n", lista.stringa);
		
		/*if ((lista.stringa[i] == TERMINATORE) || isupper(lista.stringa[i]))
		
		{
			printf("Lettera maiuscola\n");
			break;
		}*/
		
		/*	
		if (!isLowercaseLetter(lista.stringa[i]))
		
		{
			printf("Il carattere inserito non \è valido ed \è stato ignorato");
			i--;
		}*/
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
	for (i = 0; i < lista.tot; i++)
	
	{
		for (j = 0; j < lista.tot; j++)
		
		{
			if (lista.stringa[i] == lista.stringa[j+i+1])
			
			{
				printf("Lettera doppia\n");
				return 0;	/*Perché se metto return dà sempre errore? */
			}
		}
	}
	
	for (i = 0; i < lista.tot; i++)
	
	{
		printf("%c\n", lista.stringa[i]);
	}
	
	return 0;
}
