#include <stdio.h>
#include <stdlib.h>

#define LONG_MAX 9223372036854775807
#define MAX_DIM 24
#define DEBUG

/* Passare le variabili per indirizzo risparmia memoria */

/* Input funzione ricorsiva: matrice, dimensione. Per esempio prendo prime 3 righe e colonne della matrice 7x7 */

typedef double ElementiMatrice[MAX_DIM][MAX_DIM];

typedef struct
{
	ElementiMatrice Dati;
	int Dim;
} Matrice;

Matrice CalcolaMinore(Matrice, int, int);

double CalcolaDet(Matrice MatrDaElab)
{
	int ContEl, ComplAlg;
	Matrice MatrRidotta;
	double Determinante;

	if (1 == MatrDaElab.Dim)
		Determinante = MatrDaElab.Dati[0][0];
	else
	{
		Determinante = 0;
		ComplAlg = 1;

		for (ContEl = 0; ContEl < MatrDaElab.Dim; ++ContEl)
		{
			MatrRidotta = CalcolaMinore(MatrDaElab, 0, ContEl);
			Determinante = Determinante + (ComplAlg * MatrDaElab.Dati[0][ContEl] * CalcolaDet(MatrRidotta));
			ComplAlg = ComplAlg - ComplAlg - ComplAlg;
		}
	}

	return Determinante;		
}

// Record di attivazione: 1->11 (prima istanza ne attiva 11). Ciascuna di queste ne attiva 10 e così via
// Record di attivazione 11! spazio occupato = 11 * 600 byte solo per la matrice + interi + matrice ridotta 400 == 1KB quindi 11! KB

Matrice CalcolaMinore(Matrice MatrOrig, int RigaDaElim, int ColDaElim)
{
	int ROrig, COrig, RRid, CRid;
	Matrice MatrRid;
	MatrRid.Dim = MatrOrig.Dim - 1;
	RRid = 0;

	for (ROrig = 0; ROrig < MatrOrig.Dim; ++ROrig)
	{
		if (RigaDaElim != ROrig)
		{
			CRid = 0;
			
			for (COrig = 0; COrig < MatrOrig.Dim; COrig++)
			{
				if (ColDaElim != COrig)
				{
					MatrRid.Dati[RRid][CRid] = MatrOrig.Dati[ROrig][COrig];
					CRid++;
				}
			}
			
			RRid++;
		}
	}

	return MatrRid;
}

//void LeggiMatrice(Matrice *pMatrDaLegg)		// Matrice LeggiMatrice()0

/*void StampaMatrice(Matrice MatrDaStamp)
{

}*/

int main()
{
	int i, j;
	Matrice mat;
	double det;
	
	for (i = 0; i < MAX_DIM; i++)
	{
		for (j = 0; j < MAX_DIM; j++)
		{
			mat.Dati[i][j] = 2;
			printf("%f ", mat.Dati[i][j]);
		}
	}
	det = CalcolaDet(mat);
	printf("\n\nIL DETERMINANTNEAN %f", det);
	return 0;
}
