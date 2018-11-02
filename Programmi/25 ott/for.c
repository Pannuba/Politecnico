#include <stdio.h>

int main(){
	
	int i;

	for (i = 0; i < 12; i++)

	{
		printf("%d", i);
		
		if (i >= 5)
			i++;
	}
	
	printf("\n");	
	
	for (i = 12; i >= 1; i--)

	{
		printf("%d", i);
		
		if ((i % 5 == 0) || (i % 6 == 0))
			i--;
	}
	
	printf("\n");
	
	return 0;
}
