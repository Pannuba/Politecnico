#include <stdio.h>

int main(){
	
	int i, arr[10], *parr[5];
	
	for (i = 4; i >= 0; i--)
		*(parr + i) = arr + 9 - 2*i;
	
	for (i = 0; i < 10; i++)
		arr[i] = 20 + i;
	
	printf("%d\n", *(*parr - 1));
	
	for (i = 0; i < 10; i++)
	
	{
		i++;
		arr[i] = i + arr[i];
	}
	
	printf("%d\n", *(*parr + 3) + 1);
	
	return 0;
}

/*	arr [20][21][22][23][24][25][26][27][28]

		[     ][     ][     ][     ][     ] parr
		   4	  3	 	 2	 	1	   0
	Da 4 va a [21] con i = 4. Da 5 va a [23] con i = 5. Così fino a 0 --> [28] con i = 0;
*/
