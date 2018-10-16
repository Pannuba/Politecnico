#include <stdio.h>
#define MAX 1000

int main(){
	
	float elenco[MAX], num;
	int min, max, med, trovato;
	scanf("%f", &num);
	min = 0;
	max = MAX - 1;	// max = 999
	trovato = 0;
	
	while ((trovato == 0) && (min <= max))
	
	{									/* Qua si riempie l'array */
		med = min + (max / 2);
		if (elenco[med] == num)			/* Va in loop */
			trovato  = 1;
		
		else if (num > elenco[med])
				num = med + 1;
		
		else
			max = med - 1;
	
	}
	
	if (trovato == 0)
		printf("Numero %f non trovato\n", num);
	
	else
		printf("Numero %f trovato in posizione %d", num, med);
	
	return 0;
}
