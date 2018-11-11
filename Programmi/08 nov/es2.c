#include <stdio.h>

#define NUM_CIFRE 1000
#define NON_USATO -1

/* Non posso restituire un puntatore dichiarato in una funzione, perché è una variabile temporanea */

void calcolaRLC(char *binario, int  *RLC)		/* O char binario[], int RLC[] o con NUM_CIFRE */

{
	
}

int main(){
	
	int contBin, contRLC, cifreUguali;
	
	contRLC = 0;
	contBin = 0;
	
	while (contBin < NUM_CIFRE)
	
	{
		cifreUguali = 1;
		
		while ((contBin + cifreUguali < NUM_CIFRE) && (binario[contBin + cifreUguali] == binario[contBin])) // No binario[contCifre+cifreuguali] == binario[contBin])&& (contBin+cifreUguali < NUM_CIFRE))
			cifreUguali++;
		
		RLC[contRLC] = cifreUguali;
		++contRLC;
		contBin += cifreUguali;
	}
	
	while (contRLC < NUM_CIFRE)
	
	{
		RLC[contRLC] = NON_USATO;
		++contRLC;
	}
	
	/* Il programma non dà segfault se sforo da un array e scrivo in una zona di memoria mia */
