#include <stdio.h>

int main(){		/* Se faccio int main() e return 0; gcc non dà warning. Se faccio main() sì */
	
	int a, b;
	printf("Inserisci a: ");
	scanf("%i", &a);
	printf("Inserisci b: ");
	scanf("%i", &b);
	printf("%i + %i = %i", a, b, a+b);
	return 0;
}
