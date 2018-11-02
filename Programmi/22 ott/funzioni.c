#include <stdio.h>

/*int radiceQuadrata(int *x)

{
	int sqr = *x;
	
	while (sqr * sqr > *x)
		sqr--;
	
	return sqr;
}

int main(){
	
	int numero;
	int radice;
	printf("Inserire un numero: ");
	scanf("%d", &numero);
	radice = radiceQuadrata(&numero);
	printf("La radice quadrata di %d e' %d\n", numero, radice);
	
	return 0;
}*/
int radiceQuadrata(int x)		/* Vedere con metodo di Newton */

{
	int sqr = x;
	
	while (sqr * sqr > x)
		sqr--;
	
	return sqr;
}

int main(){
	
	int numero, radice;
	printf("Inserire un numero: ");
	scanf("%d", &numero);
	
	/* https://stackoverflow.com/questions/18698317/pointers-as-function-arguments-in-c */
	
	radice = radiceQuadrata(numero);		// Chiamata anche (a * a + b * b) o (b/2)
	printf("La radice quadrata approssimata di %d e' %d\n", numero, radice);
	
	return 0;
}
