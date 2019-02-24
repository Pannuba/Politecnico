#include <stdio.h>

FILE *fopen(const char path, const char *mode)		/* mode: r, rb, w, rb, a(ppend), ab, rb+, wb+, ab+ */
/* Il valore può essere NULL (errore) o non NULL (ok) */

/* Se ci sono parametri definiti di liberria, bisogna chiamarli così: si chiama NULL, non 0!*/

int fclose(FILE *fstream)		/* 0: OK, EOF: KO. EOF vale -1, ma noi la chiamiamo EOF */

int feof(FILE *stream)			/* 0: OK, non0: KO */

int ferror(FILE *stream)		/* idem */

void clearerr (FILE *stream)

int scanf(const char *format, ...)		/* ... perchè non si sa quanti parametri ci sono, dipende dal primo che è la strinca di formattazione */
/* Restituisce il # di conversioni (OK) o EOF (non OK) */

int fscanf(FILE *stream, const char *format, ...)

int printf(const char *format, ...)

int fprintf(FILE *stream, const char *format, ...)		/* # caratteri letti --> OK, < 0 --> KO */

int fgetc(FILE *stream)		/* Preleva un byte dal file interpretato come carattere. Restituisce l'int letto o EOF */

if ('a' == fgetc(...));

int getchar(void) /* char var = getchar(); */

int fputc(int c, FILE *stream)

int putchar (int c)

char *gets(char *s)		/* char arr[100]; gets(arr); prende roba da stdin e lo copia nella parte di ram che contiene arr. */
/* Se l'utente continua a scrivere, tipo 101 caratteri, gets continua a scrivere in quello che segue arr, sovrascrivendo */

// fgets, puts, fputs...

size_t fread(void *ptr, size_t  size_t nmemb, FILE *stream)		/* Legge file a blocchi. size_t è un unsigned long int. nmemb = num mem blocks. size = dimensione 1 blocco */
/* void* ptr è un puntatore a un tipo di dato sconosciuto. Prende roba dallo stream e la copia in ram a partire dalll'indirizzo di ptr
restituisce il numero di blocchi effettivamente letti
esempio: */

FILE *stream;
TipoDato Dato;
Stream = fopen(...);
fread(&Dato, sizeof(TipoDato), 1, Stream):

oppure

FILE *stream;
TipoDato Dati[5];
Stream = fopen(...);
fread(Dati+2, sizeof(TipoDato), 1, Stream)		// [ | | | | ] dati|dati+1|dati+2|...|TipoDato

size_t fwrite(const void *ptr, size_t nmemb, FILE *stream)

fopen("...", "a+") // Append, ma in ogni istante so dove sono arrivato. Eh!

void rewind(FILE *stream) // Prende un file e riporta il cursore all'inizio

int fseek(FILE *stream, long offset, int whence) // whence: a partire da dove --> SEEK_SET, SEEK_CUR, SEEK_END

fseek(MioStream, -1000L, SEEK_CUR) // 1000L: specifica al compilatore di tratttarlo come un Longint. 0 ok non0 non ok

long ftell(FILE *stream)

int fflush(FILE *stream) // fflush(stdout)


int main()
{
	FILE *MioStream;
	MioStream = fopen("NomeFile.txt", "r");
	MioStream "ciao";
	fclose(MioStream);
	
	return 0;
}