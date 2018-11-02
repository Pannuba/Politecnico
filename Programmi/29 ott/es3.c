#include <stdio.h>
#define NUM_ELEM 10

typedef struct {
	int tot;
	int lista[NUM_ELEM];
} lista;

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

	lista ingresso, pari, dispari;
	ingresso.tot = 0; pari.tot = 0; dispari.tot = 0;
	int i;
	
	for (i = 0; i < NUM_ELEM; i++)
	
	{
		printf("Inserire elemento %d di %d: ", i + 1, NUM_ELEM);
		scanf("%d", &ingresso.lista[i]);
	}
	
	for (i = 0; i < NUM_ELEM; i++)
	
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
	
	printArray("inseriti", NUM_ELEM, ingresso.lista);
	printArray("pari", pari.tot, pari.lista);
	printArray("dispari", dispari.tot, dispari.lista);
	
	return 0;
}
