#include <stdio.h>

int main(){
	
	typedef int *puntatore;
	int hey;
	puntatore p;
	*p = 14;
	hey = *p;
	
	printf("hey = %d\n", hey);
	printf("*punt = %d\n", *p);
	printf("punt = %p\n", *p);
	return 0;
}
