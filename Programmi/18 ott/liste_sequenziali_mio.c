#include <stdio.h>
#define MAX 1000

typedef struct

{
	int lunghezza;
	char parola[MAX];
} parola;

typedef struct	/* Togliere typedef perché ce n'è solo una? */

{
	int lunghezza;
	parola datiParola[];
} frase;

int main(){
	
	frase datiFrase;
	char frase[MAX] = "ciao palla franco";
	int i, j;
	
	for (i = 0; frase[i] != '\0'; i++)
	
	{
		for (j = 0; frase[j] != ' '; j++)
		
		{
			datiFrase.datiParola[j].lunghezza++;
			datiFrase.datiParola[j].parola[] += frase[j];
		}
	}
		
		
