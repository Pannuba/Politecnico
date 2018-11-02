#include <stdio.h>

int radiceQuadrata(int);		/* Se scrivo "int x" va lo stesso ma solo "int" fa più figo */

int main(){
	
	int numero, radice;
	printf("Inserire un numero: ");
	scanf("%d", &numero);
	
	/* https://stackoverflow.com/questions/18698317/pointers-as-function-arguments-in-c */
	
	radice = radiceQuadrata(numero);		// Chiamata anche (a * a + b * b) o (b/2)
	printf("La radice quadrata approssimata di %d e' %d\n", numero, radice);
	
	return 0;
}

int radiceQuadrata(int x)		/* Vedere con metodo di Newton */

{
	int sqr = x;
	
	while (sqr * sqr > x)
		sqr--;
	
	return sqr;
}
