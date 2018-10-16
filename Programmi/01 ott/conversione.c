#include <stdio.h>

int main(){
	
	char cletto, convertito;
	printf("Digita un carattere: ");
	scanf("%c", &cletto);
	
	// Scrivo così perché ad ogni carattere è associato un codice ASCII, quindi dalla 'a' alla 'z' sono numeri consecutivi
	
	while ( ( (cletto >= 'a') && (cletto <= 'z') ) || ( (cletto >= 'A') && (cletto <= 'Z') ) )
	
	{
		if ((cletto >= 'a') && (cletto <= 'z'))
		
		{
			convertito = cletto + ('A' - 'a');
			printf("convertito: %c\n", convertito);
		}
		
		else
			printf("Il carattere e' gia' maiuscolo\n");
		
		printf("Inserire un altro carattere: ");
		scanf("%*c%c", &cletto);
		
	}
	
	return 0;
}
