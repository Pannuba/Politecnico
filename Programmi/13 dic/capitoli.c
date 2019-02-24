/*	Suddividere in capitoli un romanzo: produrre una versione formattata
	File di testo .txt. Inizio paragrafo con '@'. L'output deve avere 3 righe vuote all'inizio di ogni capitolo, ...
*/

#include <stdio.h>
#include <ctype.h>	/* int toupper (int Carattere), int tolower(int Carattere */

#define NOME_FILE_IN "./Romanzo.txt"
#define NOME_FILE_OUT "RomanzoFormattato.txt"
#define TERMINATORE_CAPITOLO '@'

int main()
{
	typedef enum {false, true} bool;
	int CarLetto;	/* lol */
	int NumCapitoloCorrente;
	bool PrimaParola;
	FILE *pFileIn, *pFileOut;
	pFileIn = fopen(NOME_FILE_IN, "r");

	if (pFileIn == NULL)	/* !fopen(NOME_FILE_IN, "r")? */
	{
		printf("Errore!\n");
		return 0;	/* EOF? */
	}

	pFileOut = fopen(NOME_FILE_OUT, "w");

	if (pFileOut == NULL)
	{
		printf("Errore!\n");

		if (fclose(pFileIn) != 0)
			printf("Errore chiusura!\n");
		
		return 0;
	}

	NumCapitoloCorrente = 0;
	CarLetto = fgetc(pFileIn);

	while(CarLetto != EOF)
	{
		if (CarLetto == TERMINATORE_CAPITOLO)
		{
			PrimaParola = true;
			fprintf(pFileOut, "\n\n\nCapitolo %d\n\n", NumCapitoloCorrente);
		}
		else
		{
			if ((CarLetto == ' ') || (CarLetto == '\n'))
				PrimaParola = false;
			
			if (PrimaParola == true)
			{
				if ('a' <= CarLetto) && ('z' >= CarLetto))
					CarLetto = toupper(CarLetto);
				else
					CarLetto = tolower(CarLetto);
			}

			fputc(CarLetto, pFileOut);
		}

		CarLetto = fgetc(pFileIn);
	}

	if ((fclose(pFileIn) != 0) || (fclose(pFileOut) != 0))
		printf("Errore!\n");

	return 0;
}