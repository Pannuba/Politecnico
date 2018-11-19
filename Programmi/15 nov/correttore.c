#include <stdio.h>
#include <string.h>

#define MAX_LUNG_PAROLA 36
#define NUM_PAROLE 5
#define DIST_LETTERA_MANCANTE 26

typedef char parola[MAX_LUNG_PAROLA];
typedef parola dizionario[NUM_PAROLE];

int esiste(parola par, dizionario diz);
int distanza(parola par1, parola par2);
int suggerimento(parola par, dizionario diz);

int main(){
	
	dizionario dizionarioTest;
	int elemDiz;
	
	strcpy(dizionarioTest[0], "aaaaa");
	strcpy(dizionarioTest[1], "bbbbb");
	strcpy(dizionarioTest[2], "bbbbbaa");
	strcpy(dizionarioTest[3], "shshshsh");
	strcpy(dizionarioTest[4], "pallina");
	
	elemDiz = 0;
	
	while(elemDiz < NUM_PAROLE)
	
	{
		printf("Distanza tra %s e %n = %d", dizionarioTest[0], dizionarioTest[elemDiz], distanza(dizionarioTest[0], dizionarioTest[elemDiz]));
		printf("%d: %s\n", elemDiz, dizionarioTest[elemDiz]);
		++elemDiz;
	}
	
	return 0;
}

int esiste(parola par, dizionario diz)

{
	int parolaInEsame = 0, valoreUscita = 0;
	
	while((0 == valoreUscita) && (parolaInEsame < NUM_PAROLE))
	
	{
		if (0 == distanza(par, diz[parolaInEsame]))
			valoreUscita = 1;
		
		++parolaInEsame;
	}
	
	return valoreInUscita;
}

int suggerimento(parola par, dizionario diz)

{
	int parolaInEsame, parolaMin, distanzaMin, distanzaAttuale;
	parolaMin = 0;
	distanzaMin = distanza(par, diz[0]);
	parolaInEsame = 1;
	
	while(parolaInEsame < NUM_PAROLE)
	
	{
		distanzaAttuale = distanza(par, diz[parolaInEsame]);
		
		if (distanzaAttuale < distanzaMin)
		
		{
			parolaMin = parolaInEsame;
			distanzaMin = distanzaAttuale;
		}
		
		++parolaInEsame;
	}
	
	return parolaMin;
}

int distanza(parola par1, parola par2)

{
	int lettera, distanzaLettere, distanzaCalcolata;
	distanzaCalcolata = 0;
	lettera = 0;
	
	while((par1[lettera] != '\0') && (par2[lettera] != '\0'))
	
	{
		distanzaLettere = par1[lettera] - par2[lettera];
		
		if (distanzaLettere < 0)
			distanzaLettere = -1 * distanzaLettere;
		
		distanzaCalcolata += distanzaLettere;
		++lettera;
	}
	
	if ('\0' != par1[lettera])
	
	{
		while(par1[lettera] != '\0')
		
		{
			distanzaCalcolata = distanzaCalcolata + DIST_LETTERA_MANCANTE;
			++lettera;
		}
	}
	
	else
	
	{
		while (par2[lettera] != '\0')
		
		{
			distanzaCalcolata = distanzaCalcolata + DIST_LETTERA_MANCANTE;
			++lettera;
		}
	}
	
	return distanzaCalcolata;
}
