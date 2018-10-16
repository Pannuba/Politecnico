#include <stdio.h>

int main(){		/* Sommatoria di numeri interi letti da tastiera */
	
	int nLetto, sommatoria = 0;		// Dichiarazioni
	scanf("%d", &nLetto);
	
	while (nLetto >= 0)
	
	{
		sommatoria = sommatoria + nLetto;
		scanf("%d", &nLetto);
	}
	
	printf("%d", sommatoria);
	return 0;
}
