#include "es2.h"

bool isEven(int num)

{
	if (num % 2 == 0)
		return true;
	
	else
		return false;
}

void printArray(char *tipo, int tot, int array[])

{
	printf("Numeri %s: {", tipo);
	
	for (int i = 0; i < tot; i++)
	
	{
		if (i == tot - 1)
			printf("%d}\n", array[i]);
		
		else
			printf("%d, ", array[i]);
	}
}
