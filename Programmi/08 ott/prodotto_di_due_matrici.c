#include <stdio.h>

/* Da integrare col programma somma!!!!!*/

int main(){
	
	int i, j, k;
	i = 0;
	
	while (i < MAX)
	
	{
		j = 0;
		
		while (j < MAX)
		
		{
			m4[i][j] = 0.0f;
			k = 0;
			
			while (k < MAX)
			
			{
				m4[i][j] = m4[i][j] + m1[i][k] * m2[k][j];
				k++;
			}
			
			j++;
		}
		
		i++;
	}
	
	return 0;
}
