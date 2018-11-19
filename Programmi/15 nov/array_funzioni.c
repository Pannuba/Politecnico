#define L 10
#include <stdio.h>

int *primaFunzione(int in[]);
int *secondaFunzione(int *in);

// I parametri delle due funzioni sono identici

int main(){
	
	int e[L], n;
	
	for (n = 0; n < L; n++)
		e[n] = (L / 2) - n + 1;
	
	printf("%d\n", *secondaFunzione(primaFunzione(e)));		// è un intero
	return 0;
}

int *primaFunzione(int in[])

{
	printf("%d\n", *in);
	return (in + 2);
}

int *secondaFunzione(int *in)

{
	printf("%d\n", *(in - 1));
	return in;
}

/*	e [6][5][4][3]... 6 è in(primaFunzione), 4 è in(secondaFunzione) e in(primaFunzione) + 2
	5 è in(secondaFunzione) - 2, 4 è *secondaFunzione(primaFunzione(e)): in questo statement
	primaFunzione(e) restutuisce &e[2], *secondaFunzione(...) restituisce &e[2] */
