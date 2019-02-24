/*	ctype.h --> tolower(char*), toupper(char*)

	string.h
	*	size_t strlen(const char* Stringa) prende una C-string e restituisce la lunghezza.
		char Nome[100]; if (strlen(Nome) == 0)	// do stuff
	
	*	char* strcpy(char* Destinazione, char* Origine)
		char Nome[100], Cognome[50]; strcpy(Nome, Cognome)
	
	*	int strcmp(const char* Str1, const char* Str2)	< 0 --> Str1 precede Str2, > 0 succede, = 0 Str1 = Str2

	*	char* strstr(const char* Pagliaio, const char* Ago)
		se trovo Ago in Pagliaio restituisce il puntatore al primo elemento di Ago presente in Pagliaio, else NULL
	
	*	char* strcasestr(come sopra) --> ignora upper o lower case

	Ma solo se consentito dall'esercizio. Altrimenti stdlib.h, stdio.h
*/