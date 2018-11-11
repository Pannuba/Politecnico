#include <stdio.h>

typedef enum {false, true} bool;

bool isEven(int num)

{
	if (num % 2 == 0)
		return true;
	
	else
		return false;
}

void printArray(char *tipo, int tot, int array[])

{
	printf("Numeri %s: {", tipo);
	
	for (int i = 0; i < tot; i++)
	
	{
		if (i == tot - 1)
			printf("%d}\n", array[i]);
		
		else
			printf("%d, ", array[i]);
	}
}

int main(){
	
	int i, max_numeri;
	printf("Quanti numeri vuoi mettere? ");
	scanf("%d", &max_numeri);
	
	typedef struct {
	int tot;
	int lista[max_numeri];		/* Funziona ma gcc dà warning (-Wpedantic) */
	} lista;

	lista ingresso, pari, dispari;
	ingresso.tot = 0; pari.tot = 0; dispari.tot = 0;
	
	for (i = 0; i < max_numeri; i++)
	
	{
		printf("Inserire elemento %d di %d: ", i + 1, max_numeri);
		scanf("%d", &ingresso.lista[i]);
	}
	
	for (i = 0; i < max_numeri; i++)
	
	{
		if (!isEven(ingresso.lista[i]))
		
		{
			dispari.tot++;
			dispari.lista[i - pari.tot] = ingresso.lista[i];			
		}
		
		else
		
		{
			pari.tot++;
			pari.lista[i - dispari.tot] = ingresso.lista[i];
		}
	}
	
	printArray("inseriti", max_numeri, ingresso.lista);
	printArray("pari", pari.tot, pari.lista);
	printArray("dispari", dispari.tot, dispari.lista);
	
	return 0;
}
