/*
https://beep.metid.polimi.it/web/121725991/documenti-e-media?p_p_id=20&p_p_lifecycle=0&p_p_state=normal&p_p_mode=view&_20_struts_action=%2Fdocument_library%2Fview_file_entry&_20_fileEntryId=153178314&#p_20
Forno con porta di ingresso e di uscita. I sensori sulle porte sono imprecisi. Segnali casuali e inconsistenti.
Cercare una stima degli errori e individuarli, e del tempo di cottura
*/

#include <stdio.h>

typedef struct {
	int nt, times[100];
} listaT;

typedef struct {
	int deltaT, num_occorrenze;
} delta;

typedef struct {
	int nc;
	delta elenco[100*100];
} lista_corrispondenze;

int main() {
	
	int i, j, k;
	lista_corrispondenze l;
	listaT lin, lout;
	delta *pMax_Min;
	l.nc = 0;
	i = 0;
	
	while (i < lin.nt)
	
	{
		j = 0;
		
		while (j < lout.nt)
		
		{
			if (lin.times[i] <= lout.times[j])
			
			{
				k = 0;
				
				while ((k < l.nc) && (lout.times[j] - lin.times[i] != l.elenco[k].deltaT))
					k++;
				
				if (lout.times[j] - lin.times[i] == l.elenco[k].deltaT)
					l.elenco[k].num_occorrenze++;
				
				else
				
				{
					l.elenco[l.nc].deltaT = lout.times[j] - lin.times[i];		// lol
					l.elenco[l.nc].num_occorrenze = 1;
					l.nc++;
				}
			}
			
			j++;
		}
		
		i++;
	}
	
	pMax_Min = &(l.elenco[0]);
	k = 0;
	
	while (k < l.nc)
	
	{
		if (l.elenco[k].num_occorrenze > pMax_Min -> num_occorrenze)
			pMax_Min = &(l.elenco[k]);
		
		else if ((l.elenco[k].num_occorrenze == pMax_Min -> num_occorrenze) && (l.elenco[k].deltaT < pMax_Min -> deltaT))
			pMax_Min = &(l.elenco[k]);
		
		k++;
	}
	
	printf("Tempo di cottura: %d", pMax_Min -> deltaT);
	
	return 0;
}
