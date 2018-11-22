typedef struct El
{
	char info;
	struct El *prox;
} Elemento;

typedef Elemento *lista;

typedef struct El
{
	char info;
	struct El *prox;
	struct El *prec;
} ElementoB;

typedef ElementoB *listaB;

ListaB CostruisciB(Lista L)
{
	ListaB L1, L2;
	
	if (L == NULL)
		return NULL;
	
	L1 = CostruisciB(L->prox);
	L2 = malloc(sizeof(ElementoB));
	L2->info = L->info;
	L2->prox = L1;
	L1->prec = L2;
	L2->prec = NULL;
}

/////////////////////////////////////////////////////////////////////////

typedef struct El
{
	float info;
	struct El *prox;
} Elemento

typedef Elemento *Lista;

Lista Fusione(Lista L1, Lista L2)
{
	Elemento *L;
	
	if (L1 == NULL)
		return L2;
	
	if (L2 == NULL)
		return L1;
	
	L = malloc(sizeof(Elemento));
	
	if (L1->info < L2->info)
	{
		L->info = L1->info;
		L->prox = Fusione(L1->prox, L2));
	}
	else
	{
		L->info = L2->info;
		L->prox = Fusione(L1, L2->prox));
	}
	
	return L;
}

// Lista dinamica; accedere all'elemento centrale e cancellarlo
