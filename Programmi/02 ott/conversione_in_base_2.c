#include <stdio.h>
#define BASE 2

int main(){
	
	int n, sequenza[8];
	printf("Digitare il numero intero n: ");
	scanf("%d", &n);
	int i = 7;
	
	while ((n > 0) && (i >= 0))
	
	{
		sequenza[i] = n % BASE;
		n = n / BASE;
		i--;
	}
	
	if (n > 0)
		printf("Numero troppo grande / OVERFLOW\n");
	
	else
	
	{
		i++;
		
		while (i < 8)
		
		{
			printf("%d", sequenza[i]);
			i++;
		}
	}
	
	return 0;
}