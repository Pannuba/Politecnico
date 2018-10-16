#include <stdio.h>
#define MAX 10

/* Somma di 2 matrici */

int main(){
	
	typedef float vettore[MAX];
	typedef vettore matrice[MAX];
	vettore v1, v2
	matrice m1, m2, m3, m4;
	
	// Lettura delle matrici. Se devo scandire 2 indici / 2 cicli
	
	int i, j;
	i = 0;
	
	while (i < MAX)
	
	{
		j = 0;
		
		while (j < MAX)
		
		{
			m3[i][j] = m1[i][j] + m2 [i][j];
			j++;
		}
		
		i++;
	}
	
	return 0;
}
