#include <stdio.h>

int fattoriale(int n)			/* Non ricorsivo */

{
	int i, ris = 1;
	
	for (i = 1; i <= n; i++)	/* i = 0; i < n; i++ */
		ris = ris * i;
	
	return ris;
}

int Fat_Rick(int n)

{
	if (n == 0)
		return 1;
	
	else
		return (n * Fat_Rick(n - 1));
}

int fibonacci(int n)

{
	if ((n == 0) || (n == 1))
		return 1;
	
	else
		return (fibonacci(n - 1) + fibonacci (n - 2));
}

int MCD(int m, int n)

{
	if (m == n)
		return m;
	
	else if (m > n)
	
	{
		if (m % n == 0)
			return n;
		
		else
			return MCD(n, m%n);
	}
	
	else if (n % m == 0)
		return m;
	
	else
		return MCD(m, n % m);
}

void incrementa(int *prrt, int m)

{
	if (m != 0)
	
	{
		*prrt++;
		incrementa(prrt, m - 1);
	}
}

int main(){
	
	printf("Fattoriale di 4: %d\n", fattoriale(4));
	printf("Fat_Rick di 5: %d\n", Fat_Rick(5));
	printf("MCD di 342 e 4: %d\n", MCD(342, 4));
	//printf("MCD_Rick di 2894 e 26: %d\n", MCD_Rick(2894, 26));
	
	return 0;
}
