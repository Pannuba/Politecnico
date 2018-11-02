#include <stdio.h>
#define N 4		/* Righe */
#define M 5		/* Colonne */

int main(){
	
	typedef enum {false, true} bool;
	int Matrice[N][M], ContEl, ContR, ContC, ElCorr;
	bool TrovatoMatrice, TrovatoColonna;
	ContR = 0;
	
	while (ContR < N)
	
	{
		ContC = 0;
		
		while (ContC < M)
		
		{
			printf("Elemento (%d, %d)? ", ContR + 1, ContC + 1);
			scanf("%d", &Matrice[ContR][ContC]);
			++ContC;
		}
		
		++ContR;
	}
	
	TrovatoMatrice = false;
	ContEl = 0;
	
	while ((TrovatoMatrice == false) && (ContEl < N))
	
	{
		ElCorr = Matrice[ContEl][0];
		TrovatoMatrice = true;
		ContC = 1;
		
		while ((TrovatoMatrice == true) && (ContC < M))
		
		{
			TrovatoColonna = false;
			ContR = 0;
			
			while ((ContR < N) && (TrovatoColonna == false))
			
			{
				if (Matrice[ContR][ContC] == ElCorr)
					TrovatoColonna = true;
				
				++ContR;
			}
			
			if (TrovatoColonna == false)
				TrovatoMatrice = false;
			
			++ContC;
		}
		
		++ContEl;
	}
	
	if (TrovatoMatrice == true)
		printf("L'elemento %d \è in tutte le colonne\n", ElCorr);
	
	else
		printf("Non ci sono elementi comuni a tutte le colonne\n");
	
	return 0;
}
		
		
