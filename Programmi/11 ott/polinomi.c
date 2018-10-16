#include <stdio.h>
#define GRADO_MAX_A 10
#define GRADO_MAX_B 10
#define GRADO_MAX_RIS (GRADO_MAX_A + GRADO_MAX_B)

int main(){		// +4.3X^3 - 2.9X^1 + 2.0X(^0)
	
	float poliA[GRADO_MAX_A + 1], poliB[GRADO_MAX_B + 1], poliRis[GRADO_MAX_RIS + 1];
	int gradoA, gradoB, gradoRis, gradoCorrA, gradoCorrB, gradoCorrRis;
	printf("%+.3f x^%d\t", poliA[gradoCorrA], gradoCorrA);		/* + perché ... */
	
	while (gradoCorrRis <= gradoRis)
	
	{
		if ((gradoCorrRis > gradoA) && (gradoCorrRis > gradoB))
			poliRis[gradoCorrRis] = 0.0f;
		
		else
		
		{
			if (gradoCorrRis > gradoA)
				poliRis[gradoCorRis] = poliB[gradoCorRis];
			
			else
			
			{
				if (gradoCorrRis > gradoB)
					poliRis[gradoCorrRis] = poliA[gradoCorrRis];
				
				else
					poliRis[gradoCorrRis] = poliA[gradoCorrRis] + poliB[gradoCorrRis];
			}
		}
		
		gradoCorrRis++;
	}
	
