#include <stdio.h>

int main(){
	
	int m, n, temp, mcd;
	printf("Inserire un numero: ");
	scanf("%d", &m);
	printf("Inserire il secondo numero: ");
	scanf("%d", &n);
	
	if (n > m)
	
	{
		n = temp;
		n = m;
		m = temp;
	}
	
	while (m % n > 0)
	
	{
		temp = m % n;
		m = n;
		n = temp;
	}
	
	mcd = n;
	printf("L'MCD e' %d\n", mcd);

	return 0;
}
