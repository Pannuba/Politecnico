#include <stdio.h>

int main(){
	
	typedef int riga[1000];
	typedef riga immagine[1000];		/* int immagine[1000][1000] */
	immagine imm;
	
	int i = 0, j = 0, area = 0;

	while (i < 1000)
	
	{
		j = 0;
		
		while (j < 1000)
		
		{
			if (imm[i][j] == 1)
				area++;
			
			j++;
		}
		
		i++;
	}
	
	return 0;
}
