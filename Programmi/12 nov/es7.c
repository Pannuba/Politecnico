#include <stdio.h>

#define CAPIENZA 10
#define TERMINATORE '#'

/*Si
modifichi la chiamata a Minimo presente nel blocco main in modo da usare la nuova versione della funzione.
Scrivere una funzione (chiamata Ordina) che riceve in ingresso un dato di tipo TipoL e ne modifica il contenuto in modo che
i caratteri che esso contiene risultino in ordine di valore crescente. Il codice di Ordina deve usare la funzione Minimo.
Modificare il blocco main in modo che, se Lista contiene almeno un elemento, dopo aver stampato il carattere di minimo
valore, prima usi Ordina per ordinare il contenuto della lista sequenziale, poi stampi il contenuto della lista modificata.*/

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

void scambia (int *a, int *b)

{
	int temp;
	*a = temp;
	*a = *b;
	*b = temp;
}

void ordina(tipoL *lista)

{
	int i, j;
	
	for (i = 0; i < lista->tot; i++)
	
	{		
		while (j = lista->tot; j > i; j--)
		
		{
			if (lista.stringa[j] < lisat.stringa[j-1])
				scambia(&lista.stringa[j], &lista.stringa[j-1]);
		}
}

char minimo(TipoL lista, char soglia)

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
		
		if (//Se la lista non contiene alcun carattere superiore a Soglia, la funzione restituisce TERMINATORE
		)
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

void eseguiInput(TipoL *lista, char *soglia)

{
	int i;
	char input;
	
	printf("Soglia? ");
	scanf("%c", &soglia);
	
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
			lista->stringa[i] = input;
			lista->tot++;
		}
	}
}

int main(){
	
	TipoL lista;
	int i, j;
	char soglia;
	
	lista.tot = CAPIENZA;
	
	eseguiInput(&lista, &soglia);
	
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
