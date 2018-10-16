#include <stdio.h>

int main(){
	
	int lato1, lato2, lato3;
	printf("Inserire i valori del primo lato: ");
	scanf("%i", &lato1);
	printf("Inserire i valori del secondo lato: ");
	scanf("%i", &lato2);
	printf("Inserire i valori del terzo lato: ");
	scanf("%i", &lato3);
	
	
	if ( ((lato1 + lato2) > lato3) && ((lato2 + lato3) > lato1) && ((lato1 + lato3) > lato2) )
	
	{
		if ((lato1 == lato2) && (lato2 == lato3))
			printf("Il triangolo e' equilatero\n");
		
		else if ((lato1 != lato2) && (lato2 != lato3))
			printf("Il triangolo e' scaleno\n");
		
		else
			printf("Il triangolo e' isoscele\n");
		
	}
	
	else
		printf("I lati inseriti non sono di un triangolo\n");
	
	return 0;
}
