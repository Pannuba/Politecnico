#define LUNG 10
#include <stdio.h>

int main(){
	
	int i, arr[LUNG], *puntmin, *puntmax;
	puntmin = &(arr[0]);
	i = 1;

	while (i < LUNG)
	
	{
		if (arr[i] < *puntmin)
			puntmin = &(arr[i]);

		i++;
	}
	
	puntmin = arr;
	i = 1;
	
	/*puntmax = &(arr[0]);
	i = 1;*/


	while (i < LUNG)
	
	{
		if (*(arr + i) < *puntmin)
			puntmin = arr + i;
		
		i++;
	}
	
	return 0;
}












