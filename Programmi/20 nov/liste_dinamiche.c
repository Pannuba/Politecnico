#include <stdio.h>

const int N = 100;

typedef struct El
{
	char info;
	struct El *prox;
} Elemento;

int AlmenoN(Elemento *L, char c, int k)
{
	if (k == 0)
		return 1;
		
	if (L == NULL)
		return 0;
	
	if (L->info == c)
		return AlmenoN(L->prox, c, k - 1);
	
	else
		return AlmenoN(L->prox, c, k);
}

int AlmenoNconsec(Elemento *L, char c, int k)
{
	if (k == 0)
		return 1;
	
	if (L == NULL)
		return 0;
	
	if (L->info == c)
		return AlmenoNconsec(L->prox, c, k - 1);
	
	else
		return AlmenoNconsec(L->prox, c, N);
}
		

int main(){
	
	
