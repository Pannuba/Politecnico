#include <stdio.h>

int main(){
	
	char str[30];	//30 caratteri più quello di terminazione (totale: 31)
	scanf("%s", str);
	j = 0;
	
	while ((j < 30) && (str[j] != '\0'))
		j++;
	
	j--;
	int i = 0;
	
	if (i > j)
		printf("Stringa vuota\n");
	
	else
	
	{
		while ((str[j] == str[i]) && (j > i))
		
		{
			j--;
			i++;
		}
		
		if (j < i)
			printf("%s non palindroma\n", str);
		
		else
			printf("%s palindroma\n", str);
	}
	
	return 0;
}
