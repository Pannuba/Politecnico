#include <stdio.h>

/*void scambia (int a, int b)

{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(){					NON VA PERCHE PASSO ALLA FUNZIONE UNA COPIA DI A E B, NON LE VARIABILI IN MAIN
	
	int a, b;
	printf("Inserire a: ");
	scanf("%d", &a);
	printf("Inserire b: ");
	scanf("%d", &b);
	scambia(a, b);
	printf("b e' diventato %d\n", b);
	return 0;
}*/

void scambia (int *a, int *b)

{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	
	int a, b;
	printf("Inserire a: ");
	scanf("%d", &a);
	printf("Inserire b: ");
	scanf("%d", &b);
	scambia(&a, &b);			/* Anche in scanf passo l'indirizzo per modificare la variabile nel main */
	printf("b e' diventato %d\n", b);
	return 0;
}
