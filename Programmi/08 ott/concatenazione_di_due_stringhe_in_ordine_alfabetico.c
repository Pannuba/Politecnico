#include <stdio.h>
#define SHORT 50
#define LONG 100

int main(){
	
	/* Dimensione di un array: valore intero, parametro definito con #define, no variabile o costante */
	
	int i, j, k;
	char carTemp, array1[SHORT], array2[SHORT], array3[LONG];
	
	while (i < SHORT)
	
	{
		scanf("%c", &array1[i]);
		i++;
	}
	
	i = 0;
	
	while (i < SHORT)
	
	{
		scanf("%c", &array2[i]);
		i++;
	}
	
	i = 0;
	
	while ((i < SHORT) && (array1[i] == array2[i]))
		i++;
	
	if ((i == SHORT) || (array1[i] < array2[i]))
	
	{
		i = 0;
		k = 0;
		
		while (i < SHORT)
		
		{
			array3[k] = array1[i];
			i++;
			k++;
		}
		
		j = 0;
		
		while (j < SHORT)
		
		{
			array3[k] = array2[j];
			j++;
		}
	}
	
	else
	
	{
		j = 0;
		k = 0;
		
		while (j < SHORT)
		
		{
			array3[k] = array2[j];
			j++;
			k++;
		}
		
		i = 0;
		
		while (i < SHORT)
		
		{
			array3[k] = array1[i];
			i++;
			k++;
		}
		
		k = 0;
		
		while (k < LONG)
		
		{
			printf("%c", array3[k]);
			k++;
		}
	}
	
	return 0;
}
