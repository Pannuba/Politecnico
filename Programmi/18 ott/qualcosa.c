#include <stdio.h>

int main(){
	
	int matricola[6] = {9, 1, 0, 9, 8, 0};
	//char prova[10] = {'S', 't', 'r', 'i', 'n', 'g', 'a', '\0'};
	int j, i;
	
	for (i = 0; i < 10; ++i)
	
	{
		printf("\n%d", i);
		
		for (j = 0; j < 6; ++j)
		
		{
			if (matricola[j] == i)
				printf("*");
		}
	}
	
	printf("\n");
	return 0;
}
