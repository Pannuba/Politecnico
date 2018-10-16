#include <stdio.h>
#define MAX 100

int main(){
	
	int i;
	char parola[MAX];
	
	
	/*for (i = 0; i < MAX; i++)
	
	{
		
	}*/
	
	i = 0;
	scanf("%c", &parola[i]);
	
	while ((i < MAX) && (parola[i] != '\0'))
	
	{
		i++;
		scanf("%c", &parola[i]);
	}
	
	if (parola[i] == '\0')
		i--;
	
	while (
