#include <stdio.h>

#define MAX_QUADRATI 3

int main(){
	
	float input;
	int numeroQuadrati;
	scanf("%f", &input);
	numeroQuadrati = 0;
	
	while ((input >= 0) && (numeroQuadrati < MAX_QUADRATI))
	
	{
		printf("%f", input*input);
		numeroQuadrati++;
		
		if (numeroQuadrati < MAX_QUADRATI)
			scanf("%f", &input);
	}
	
	scanf("%f", &input);
	
	for (numeroQuadrati = 0; (input >= 0) && (numeroQuadrati < MAX_QUADRATI); numeroQuadrati++)
	
	{
		printf("%f", input*input);
		
		if (numeroQuadrati < MAX_QUADRATI - 1)
			scanf("%f", &input);
	}
	
	numeroQuadrati = 0;
	
	do
	
	{
		scanf("%f", &input);
		
		if (input >= 0)
		
		{
			printf("%f", input*input);
			numeroQuadrati++;
		}
	
	} while ((input >= 0) && (numeroQuadrati > MAX_QUADRATI));
	
	return 0;
}
		
