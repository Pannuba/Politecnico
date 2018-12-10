/*
Le liste dinamiche servono per creare nuove variabili e distruggerle durante il corso del programma.
Di solito le nuove variabili sono allocate all'inizio del programma, mentre qua quelle che non uso le distruggo.
Le liste dinamiche raggruppano variabili allocate dinamicamente

La testa non ha il campo dati, solo [...], ed è l'unica cosa che devo allocare staticamente, mentre gli elementi che seguono vengono allocati solo quando serve: [ T ] --> [ * |   ] --> ...
L'ultimo elemento ha il valore NULL: [ * | N ]--*

Limitazioni: possono essere percorse in una direzione, ma non nell'altra.

Per eliminare un elemento lo cancello con free() e attacco quelli alle estremità. Per fare ciò mi servono due puntatori.

Lista dinamica bidirezionale: può essere scorsa (scorta? scorruta?) in entrambe le direzioni. * --> [  |  |  ] --> ...

Quando dichiaro il tipo di dato di una lista dinamica faccio così:
*/

// Dichiarazione di tipo (anche se non c'è typedef)

struct El
{
	int Dato;
	struct El *Prossimo;
};

typedef struct El elemlista;

// OPPURE

typedef struct El
{
	int Dato;
	struct El *prossimo;
} elemlista;

// NON FARE: dichiarazione di variabile

struct
{
	int Dato;
	struct El *prossimo;
} El

/*
Punt = malloc(sizeof(TipoDelDato); restituisce un puntatore al primo dei X byte allocati
sizeof() non è una funzione perché riceve in ingresso il nome di un tipo di dato ("int" e non una variabile o un numero)
