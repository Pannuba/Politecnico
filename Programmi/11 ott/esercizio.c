#include <stdio.h>
#define INT_MAX 2147483647
#define MAX_LUNG 100

int main(){
	
	//typedef char[INT_MAX] string;
	char testoA[MAX_LUNG] = "alternativamente", testoB[MAX_LUNG] = "eternita", testoComune[MAX_LUNG];
	int cursoreA, cursoreB, cursoreComune, cursoreAlocale, cursoreBlocale, inizioTestoComune, maxLunghezza, lunghezzaLocale;
	maxLunghezza = 0;
	cursoreA = 0;
	inizioTestoComune = 0;
	
	while ('\0' != testoA[cursoreA])
	
	{
		cursoreB = 0;
		
		while ('\0' != testoB[cursoreB])
		
		{
			if (testoB[cursoreB] == testoA[cursoreA])
			
			{
				lunghezzaLocale = 1;
				cursoreAlocale = cursoreA + 1;
				cursoreBlocale = cursoreB + 1;
				
				while (('\0' != testoA[cursoreAlocale]) && ('\0' != testoB[cursoreBlocale]) && (testoA[cursoreAlocale] == testoB[cursoreBlocale]))
				
				{
					lunghezzaLocale++;
					cursoreAlocale++;
					cursoreBlocale++;
				}
				
				if (lunghezzaLocale > maxLunghezza)
				
				{
					maxLunghezza = lunghezzaLocale;
					inizioTestoComune = cursoreA;
				}
			}
			
			++cursoreB;
		}
		
		cursoreA++;
	}
	
	cursoreComune = 0;
	cursoreA = inizioTestoComune;
	
	while (cursoreA < inizioTestoComune + maxLunghezza)
	
	{
		testoComune[cursoreComune] = testoA[cursoreA];
		cursoreA++;
		cursoreComune++;
	}
	
	testoComune[cursoreComune] = '\0';
	printf("%s\n", testoComune);
	return 0;
}

