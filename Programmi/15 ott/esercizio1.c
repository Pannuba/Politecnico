#include <stdio.h>
#define PI 3.14159

/* Elia Bommardelli è bello per analisi */

/* warning: ignoring return value of ‘scanf’, declared with attribute warn_unused_result [-Wunused-result] */

int main(){
	
	float raggio, circonferenza, area;
	printf("Inserire il raggio della circonferenza: ");
	scanf("%f", &raggio);
	
	while (raggio <= 0)
	
	{
		printf("Inserire un valore maggiore di zero: ");
		scanf("%f", &raggio);
	}
		
	area = (raggio * raggio) * PI;
	circonferenza = 2 * PI * raggio;
	printf("Circonferenza: %f\n", circonferenza);
	printf("Area: %f\n", area);
	
	return 0;
}
