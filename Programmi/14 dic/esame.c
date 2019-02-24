#include <stdio.h>
#include <string.h>

#define LUNG_STR 101

int main(int argc, char *argv[])
{
	FILE *FileInput;
	char LineaCorrente[LUNG_STR], LineaMax[LUNG_STR];
	int LungCorrente, LungMax, NumCaratteri, NumLinee, Cursore;

	if (argc == 1)
		return 1;
	
	FileInput = fopen(argv[1], "r");
	NumCaratteri = 0;
	LungMax = 0;
	NumLinee = 0;

	/* Ora dobbiamo esplorare il file linea per linea */

	while (fgets(LineaCorrente, LUNG_STR, FileInput) != NULL)
	{
		NumLinee += 1;
		LungCorrente = strlen(LineaCorrente);

		for(Cursore = 0; LineaCorrente[Cursore] != '\0'; Cursore++)
		{
			if ((LineaCorrente[Cursore] != '\0') || (LineaCorrente[Cursore] != '\n'))
				--LungCorrente;
		}

		NumCaratteri += LungCorrente;

		if (LungMax < LungCorrente)
		{
			strcpy(LineaMax, LungCorrente);
			LungMax = LungCorrente;
		}
	}

	/* printf ... */

	fclose(FileInput);

	return 0;
}