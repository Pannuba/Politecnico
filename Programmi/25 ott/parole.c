#include <stdio.h>
#define DIM_ELENCO 2000

int main(){
	
	struct
	
	{
		int NumeroParola[DIM_ELENCO], NumElementi;
	} ListaParola;
	
	int NumeroDaValutare, DivisoreAttuale, NumeroIterazioni, DaCercare, IlNumeroEPrimo, ElementoAttuale, Min, Max, Med;
	
	ListaParola.NumElementi = 0;
	NumeroDaValutare = 2;
	
	while (ListaParola.NumElementi < DIM_ELENCO)
	
	{
		DivisoreAttuale = NumeroDaValutare - 1;
		IlNumeroEPrimo = 1;
		
		while ((DivisoreAttuale > 1) && (IlNumeroEPrimo == 1))
		
		{
			if (NumeroDaValutare % DivisoreAttuale == 0)
				IlNumeroEPrimo = 0;
			
			--DivisoreAttuale;
		}
		
		if (IlNumeroEPrimo == 1)
		
		{
			ListaParola.NumeroParola[ListaParola.NumElementi] = NumeroDaValutare;
			++ListaParola.NumElementi;
		}
		
		++NumeroDaValutare;
	}
	
	scanf("%d", &DaCercare);
	
	while (DaCercare >= 0)
	
	{
		ElementoAttuale = 0;
		NumeroIterazioni = 1;
		
		while (ListaParola.NumeroParola[ElementoAttuale] < DaCercare)
		
		{
			ElementoAttuale = ElementoAttuale + 1;	//ElementoAttuale += 1? ElementoAttuale++?
			NumeroIterazioni = NumeroIterazioni + 1;
		}
			
		if (ListaParola.NumeroParola[ElementoAttuale] == DaCercare)
			printf("E' primo!\n");
		
		else
			printf("Non e' primo!\n");
		
		NumeroIterazioni = 0;
		Min = 0;
		Max = DIM_ELENCO - 1;
		
		while (Min < Max)
		
		{
			Med = Min + (Max - Min) / 2;
			
			if (ListaParola.NumeroParola[Med] < DaCercare)
				Min = Med + 1;
			
			else
				Max = Med;
			
			NumeroIterazioni++;
		}
		
		if (ListaParola.NumeroParola[Min] == DaCercare)
			printf("E' primo!\n");
		
		else
			printf("Non e' primo!\n");
		
		scanf("%d", &DaCercare);
	}		
	
	return 0;
}
