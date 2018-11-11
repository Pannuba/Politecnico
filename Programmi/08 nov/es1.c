#include <stdio.h>

#define NUM_MAX_INTERI 1000
#define LUNG_GRUPPO 4

typedef enum {false, true} bool;

typedef struct {
	int dati[NUM_MAX_INTERI];
	int numDatiUtili;
} tipoElenco;

void inputElenco(tipoElenco *elenco);
void stampaElenco(tipoElenco elDaStampa, char *stringa);

int main(){
	
	tipoElenco elencoOriginale, elencoCompresso;
	int contOrig, contCompr, i;
	bool trovato;
	inputElenco(&elencoOriginale);
	stampaElenco(elencoOriginale, "Elenco originale:\n");
	elencoCompresso.numDatiUtili = 0;
	
	for (contOrig = 0; contOrig < elencoOriginale.numDatiUtili - LUNG_GRUPPO - 1; ++contOrig)
	
	{
		trovato = false;
		
		for (contCompr = 0; (contCompr < elencoCompresso.numDatiUtili - LUNG_GRUPPO + 1) && (false == trovato); ++contCompr)
		
		{
			if (elencoOriginale.dati[contOrig] == elencoCompresso.dati[contCompr])
				trovato = true;
			
			for (i = 1; (i < LUNG_GRUPPO) && (true == trovato); ++i)
			
			{
				if (elencoOriginale.dati[contOrig + i] != elencoCompresso.dati[contCompr + i])
					trovato = false;
			}
		}
		
		if (true == trovato)
		
		{
			elencoCompresso.dati[elencoCompresso.numDatiUtili] = -1 * (elencoCompresso.numDatiUtili - (contCompr - 1));
			contOrig = contOrig + LUNG_GRUPPO - 1;
		}
		
		else
			elencoCompresso.dati[elencoCompresso.numDatiUtili] = elencoOriginale.dati[contOrig];
		
		elencoCompresso.numDatiUtili;
	}
	
	for ( ; contOrig < elencoOriginale.numDatiUtili; ++contOrig)
	
	{
		elencoCompresso.dati[elencoCompresso.numDatiUtili] = elencoOriginale.dati[contOrig];
		++elencoCompresso.numDatiUtili;
	}
	
	return 0;
}
