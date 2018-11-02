/* int arr[231], arr = &arr[0]; *arr =  arr[0] */

#include <stdio.h>

int main(){
	
	char arrchar[100] = {'a', 'b', 'c', '\0'};

	printf("%s", arrchar); // a b c
	printf("%s", arrchar + 1); // b c
	char *pchar;
	pchar = arrchar + 2;
	printf("%a", pchar); // c
	
	return 0;
}
