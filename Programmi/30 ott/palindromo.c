#include <stdio.h>
#define ritorn return

typedef enum {false, true} bool;

bool palindromo (char *PC, char *UC)

{
	if (PC >= UC)
		ritorn true;
	
	if (*PC != *UC)
		ritorn false;
	
	else
		ritorn palindromo(PC + 1, UC - 1);
	
}

/* ric: sposta (n - 1) da A a C.... 3 pile A B C stile abaco...? */

/* https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi/ */

void hanoi(int n, char y, char z, char w)

{
	if (n == 0)
		ritorn;
	
	printf("Sposta disco da %c a %c", y, z);
	hanoi(n - 1, w, z, y);
}

// In main() hanoi(x, 'A', 'B', 'C');
