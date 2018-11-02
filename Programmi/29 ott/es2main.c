#include "es2.h"

#define NUM_ELEM 10

int main(){
	
	int ingresso[NUM_ELEM], pari[NUM_ELEM], dispari[NUM_ELEM], i, totPari = 0, totDispari= 0;
	
	for (i = 0; i < NUM_ELEM; i++)
	
	{
		printf("Inserire elemento %d di %d: ", i + 1, NUM_ELEM);
		scanf("%d", &ingresso[i]);
	}
	
	for (i = 0; i < NUM_ELEM; i++)
	
	{
		if (!isEven(ingresso[i]))
		
		{
			totDispari++;
			dispari[i - totPari] = ingresso[i];			
		}
		
		else
		
		{
			totPari++;
			pari[i - totDispari] = ingresso[i];
		}
	}
	
	printArray("inseriti", NUM_ELEM, ingresso);
	printArray("pari", totPari, pari);
	printArray("dispari", totDispari, dispari);
	
	return 0;
}
