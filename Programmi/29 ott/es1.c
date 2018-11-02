#include <stdio.h>
#define MAX 1000000			/* Esiste un modo per fare senza max? */

int main(){
	
	int input[MAX], tot_elementi = 0, max = 0, min = 0, i;
	
	for (i = 0; i < MAX; i++)
	
	{
		printf("Inserisci un numero della sequenza (0 per terminare): ");
		scanf("%d", &input[i]);
		
		if (input[i] == 0 && i == 0)
		
		{
			printf("Nessun numero inserito\n");
			return 0;
		}
		
		else if (input[i] == 0)
			break;					/* Come fare senza break? */
		
		tot_elementi++;			/* Essendo dopo il break non conta lo 0 alla fine */
	}
	
	for (i = 0; i < tot_elementi; i++)
	
	{
		if (input[i] >= input[i + 1] && input[i] >= max)
			max = input[i];
		
		if (min == 0 && i == 0)
			min = input[i];
		
		else if (input[i] <= input[i + 1] && input[i] <= min)
			min = input[i];
		
		if (i == tot_elementi - 1)
		
		{
			if (input[i] > max)
				max = input[i];		/* Son stato a disperarmi perché era input[i] = max */
			
			if (input[i] < min)
				min = input[i];
		}
	}
	
	printf("Valore massimo: %d\n", max);
	printf("Valore minimo: %d\n", min);
	
	return 0;
}
