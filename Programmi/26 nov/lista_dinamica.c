/*	Scrivere funzione ricorsiva: testo "poltrone", frammento "tre". Con delle liste dinamiche si vuole restituire una lista di puntatori ad elemento
	LP (lista posizioni) --> crea una lista dinamica in cui ad ogni elemento punta al pezzi di frammento in testo
*/

typedef struct El
{
	char info;
	struct El *prox;
} Elemento;

typedef struct E
{
	Elemento *posizione;
	struct E *next;
} ElPosizioni;

typedef Elemento *testo;
typedef ElPosizioni *listaPosizioni;

listaPosizioni CercaFrammento (testo T, testo F)
{
	ElPosizioni *p;
	
	if (F == NULL)
	{
		printf("Frammento presente\n");
		return NULL;
	}
	
	if (T == NULL)
	{
		printf("Frammento non presente");
		return NULL;
	}
	
	if (T->info != F-> info)
		return CercaFrammento(T->prox, F);
	
	p = malloc(sizeof(ElPosizione));
	p->posizione = T;
	p->next = CercaFrammento(T->prox, F->prox);
	return p;
}

/* studio per esame IEEE7, complemento a due, trovare il reale rappresentato da float, liste dinamiche, file */
