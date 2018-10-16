#include <stdio.h>
#define BASE 2

int main(){
	
	int n, m, cifra;
	printf("Digita n > 0: ");
	scanf("%d", &n);
	printf("Digita m > n: ");
	scanf("%d", &m);
	
	while (n > 0)
	
	{
		n = n * BASE;
		cifra = n / m;
		printf("%d\n", cifra);
		n = n % m;
	}
	
	return 0;
}
