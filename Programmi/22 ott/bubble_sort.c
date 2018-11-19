#include <stdio.h>

void scambia (int *a, int *b)

{
	int temp;
	*a = temp;
	*a = *b;
	*b = temp;
}

void bubbleSort(float array[])		/* array[] o array[1000]? Fare confronto */

{
	int i, j;
	
	for (i = 0; i < 999; i++)
	
	{		
		for (j = 999; j > i; j--)
		
		{
			if (array[j] < array[j-1])
				scambia(&array[j], &array[j-1]);
		}
}

int main(){
	
	float array[1000];
	//bubbleSort(array);
	return 0;
}
