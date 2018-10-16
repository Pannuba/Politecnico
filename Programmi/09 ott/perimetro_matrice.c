#include <stdio.h>

int main(){
	
	typedef int riga[1000];
	typedef riga immagine[1000];		/* int immagine[1000][1000] */
	
	int i = 0, j = 0, perimetro = 0;
	immagine imm;

	while (i < 1000 - 1)				/* La matrice viene letta a partire dall'angolo in alto a sinistra */
	
	{
		j = 0;
		
		while (j < 1000 - 1)
		
		{
			if ((imm[i][j] != imm[i][j+1]) || (imm[i][j] != imm[i+1][j]))
				perimetro++;
			
			j++;
		}
		
		i++;
	}
	
	return 0;
}
