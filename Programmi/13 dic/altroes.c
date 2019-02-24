/*	Input: aaaccffffrrtuuuzz
	Output: z2\nu3\nt1\nr2\nf4\nc2\na3
*/

#include <stdio.h>

#define NOME_FILE_IN "./Input"
#define NOME_FILE_OUT "./Output"

int main()
{
	int NumCarLetti['z' - 'a' + 1];		/* [a|b|c| ... | | | ] (da 0 a z-a) esempio: 'c'-'a' = 2, l'indice dove vado a scrivere la c */
	FILE *pFileIn, *pFileOut;
	char Cursore;

	/* Apertura file */

	for (Cursore = 'a'; Cursore <= 'z'; ++Cursore)
		NumCarLetti[Cursore - 'a'] = 0;
	
	CarLetto = fgetc(pFileIn);

	while (('a' <= CarLetto) && (CarLetto <= 'z'))
	{
		++NumCarLetti[CarLetto - 'a'];
		CarLetto = fgetc(pFileIn);
	}

	for (Cursore = 'z'; Cursore >= 'a'; --Cursore)
	{
		if (NumCarLetti[Cursore - 'a'] > 0)
			fprintf(pFileOut, "%c%d\n", Cursore, NumCarLetti[Cursore - 'a']);
	}

	/* Chiusura file */

	return 0;
}