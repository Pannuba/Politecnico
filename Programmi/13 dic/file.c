#include <stdio.h>
#include <stdlib.h>

#define LUNG_DESCR 20
#define FILE_INPUT "./Input"
#define FILE_LEGGERI "./Leggere"
#define FILE_PESANTI "./Pesanti"
#define FILE_RAPPORTO "./Rapporto.txt"

typedef struct
{
	char Descrizione[LUNG_DESCR];
	float Peso;
} Imballo;

int ClassificaImballo(float Soglia)
{
	FILE *pInput, *pPesanti, *pLeggeri, *pRapporto, *pDestinazione;
	Imballo ImbCorrente;
	int ContDati;
	pInput = fopen(FILE_INPUT, "rb");	// Lettura, file binario

	if (pInput == NULL)
		return EOF;

	pPesanti = fopen(FILE_PESANTI, "wb");
	pLeggeri = fopen(FILE_LEGGERI, "wb");
	pRapporto = fopen(FILE_RAPPORTO, "w");
	ContDati = 0;

	while (fread(&ImbCorrente, sizeof(Imballo), 1, pInput) > 0)
	{
		++ContDati;
		
		if (ImbCorrente.Peso > Soglia)
			pDestinazione = pPesanti;
		else
			pDestinazione = pLeggeri;
		
		fwrite(&ImbCorrente, sizeof(Imballo), 1, pDestinazione);
		fprintf(pRapporto, "[%s, %f]\n", ImbCorrente.Descrizione, ImbCorrente.Peso);
	}

	fclose(pInput);
	fclose(pPesanti);
	fclose(pLeggeri);
	fclose(pRapporto);
	
	return ContDati;
}