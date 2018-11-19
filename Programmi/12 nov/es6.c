#include <stdio.h>

#define CAPIENZA 10
#define TERMINATORE '#'

typedef enum {false, true} bool;

typedef struct {
	char stringa[CAPIENZA];
	int tot;
} TipoL;

void printArray(TipoL lista)

{
	int i;
	
	for (i = 0; i < lista.tot; i++)
		printf("%c\n", lista.stringa[i]);
}

char minimo(TipoL lista)

{
	char minAssoluto = ' ', minTemp;
	int i;
	
	for (i = 0; i < lista.tot; i++) /* Confrontare con es 29ott */
	
	{
		if ((lista.stringa[i] < lista.stringa[i+1]) && (minAssoluto == ' '))
			minAssoluto = lista.stringa[i];
		
		if (lista.stringa[i] < lista.stringa[i+1])
			minTemp = lista.stringa[i];
		
		if (minTemp < minAssoluto)
			minAssoluto = minTemp;
	}
	
	return minAssoluto;
}

bool isLowercaseLetter(char letter)

{
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

void eseguiInput(TipoL *lista)

{
	int i;
	char input;
	
	for (i = 0; i < CAPIENZA; i++)
	
	{
		printf("Inserire il %d carattere: ", i + 1);
		scanf("%c", &input); getchar();
		
		if (input == TERMINATORE)
		
		{
			printf("Inserito terminatore\n");
			break;
		}
		
		else if (!isLowercaseLetter(input))
		
		{
			printf("Il carattere inserito non \è valido ed \è stato ignorato\n");
			i--;
		}
		
		else
		
		{
			lista->stringa[i] = input;		/* Con la freccina funziona ma non so perché */
			lista->tot++;
		}
	}
}

int main(){
	
	TipoL lista;
	int i, j;
	
	lista.tot = 0;
	
	eseguiInput(&lista);
	
	for (i = 0; i < lista.tot; i++)
	
	{
		for (j = 0; j < lista.tot; j++)
		
		{
			if (lista.stringa[i] == lista.stringa[j+i+1])
			
			{
				printf("Lettera doppia\n");
				//return 0;	/*Perché se metto return dà sempre errore? */
			}
		}
	}
	
	printArray(lista);
	
	/******************ES 5*******************/
	
	if (lista.tot >= 1)
		printf("Minimo: %c\n", minimo(lista));
	
	return 0;
}
