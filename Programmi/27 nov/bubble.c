/* Bubble sort su liste dinamiche: un'estremità vale l'altra */

typedef struct El
{
	float info;
	struct El *prox;
} Elem;

typedef Elem *Lista;

void BubbleDyn(Lista *pl) /* lol */
{
	Elem *punt;
	float temp;
	int variata = 1;
	
	while (varaita == 1)
	{
		variata = 0;
		punt = *pl;
		
		while (punt->prox != NULL)
		{
			if (punt->info > (punt->prox)->info)
			{
				temp = punt->info;
				punt->info = (punt->prox)->info;
				(punt->prox)->info = temp;
				variata = 1;
			}
			
			punt = punt->prox;
		}
	}
}
