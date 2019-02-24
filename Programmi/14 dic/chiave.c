#include <stdio.h>

#define NOMEFILE "Arduino"
#define CHIAVE_CERCATA '#'

typedef struct
{
	int Valore;
	char Chiave;
} Dato;

typedef enum {false, true} bool;

int main()
{
	FILE *pFile;
	Dato DatoLetto;
	bool ChiaveTrovata;
	int NuovoValore, EsitoChiusura;
	pFile = fopen(NOMEFILE, "rb+");
	fread(&DatoLetto, sizeof(Dato), 1, pFile);
	ChiaveTrovata = false;

	while ((ChiaveTrovata == false) && (fread(DatoLetto, sizeof(Dato), 1, pFile) == 1))
	{
		if (CHIAVE_CERCATA == DatoLetto.Chiave)
		{
			ChiaveTrovata = true;
			NuovoValore = DatoLetto.Valore;
		}
	}

	if (ChiaveTrovata == true)
	{
		rewind(pFile);
		fread(&DatoLetto, sizeof(Dato), 1, pFile);
		DatoLetto.Valore = NuovoValore;
		rewind(pFile);
	}
	
	fwrite(&DatoLetto, sizeof(Dato), 1, pFile);
	EsitoChiusura = fclose(pFile);
	
	/* ... */
	
	return 0;
}