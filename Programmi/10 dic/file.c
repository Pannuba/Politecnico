/*per il c tutto è un file: schermo, tastiera, mouse.

Il file è molto vicino all hardware. Ci interessa pero parlare di stream: il concetto astratto che rappresenta lo scambio di dati tra il calcolatore e qualcos'altro
Per usare i file in c si usa il tipo di dato FILE. si usa un puntatore:
FILE *mioStream;

Un file è una sorta di struct utilizzati per tenere conto di tutel e caratteristiche dello stream che stiamo usando

stream predefiniti in stdio.h:
stdin: standard input. stream associato alla perferica che viene utilizzata per fare l'input.
stdout: standard output.
stderr: standard error

Bisogna associare la periferica allo stream, e si apre lo stream. Poi si chiude.
Per quelli standard è automatica, altrimenti uso fopen e fclose

2 tipi: stream testuale e stream binario. Uno stream è una successione di byte che possono essere presi così come sono o per rappresentare testo.
Il testo segue delle regole (a capo, tab, ...). Per gli stream di testo bisogna guardarci dentro (\n --> a capo, ...)


alcune periferiche scambiano dati a blocchi: byte per byte è troppo lento. Vengono letti/scritti blocchi interi
*/

#include <stdio.h>

int main()
{
	FILE *MioStream;
	MioStream = fopen("NomeFile.txt", "r");
	MioStream "ciao";
	fclose(MioStream);
	
	return 0;
}

/* GREP/DEBUGGING: ./programma > miofile.txt
grep -n "Warning" miofile.txt
./programma < miofile.txt
./programma1 | ./programma2
ls | grep "risultati.dat"
*/