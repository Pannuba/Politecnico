typedef struct El
{
	float h;
	float p;
	struct El *nexth
	struct El *nextp
} Elem;

typedef struct			/* Perché manca nome dopo struct? Cercare declaration e controllare */
{						/* https://stackoverflow.com/questions/17720223/c-typedef-struct-name-vs-typedef-struct-name */
	Elem *Lk;
	Elem *Lp;
} ListaDoppia;

ListaDoppia Cancella(ListaDoppia L, float H)
{
	Elem *punth, *prech, *precp, *puntp;
	punth = L.Lh;
	prech = NULL;
	
	while (punth != NULL && punth->h != H)
	{
		prech = punth;
		punth = punth->nexth;
	}
	
	if (punth == NULL)
		return L;
	
	puntp = L.Lp;
	precp = NULL;
	
	while (puntp != punth)
	{
		precp = puntp // mancna una rigaaaaa"!!!!!!!! aa aaaaaaaa
	}
	
	if (prech == NULL)
		L.Lh = puntp->nexth;
	else
		prech->nexth = punth->nexth;
	if (precp == NULL)
		L.Lp = puntp->nextp;
	else
		precp->nextp = puntp->nextp;
	
	free(punth);
	return L;
}
