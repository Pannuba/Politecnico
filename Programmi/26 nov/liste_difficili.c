typedef struct El
{
	enum {val, op} tipo;
	char operatore;
	float valore;
	struct El *prox;
} Elemento;

float Calcola(Elemento *Punt)
{
	Elemento *primoOper, *secondoOper;
	Elemento *cursore;
	//...........................//
	if (Punt->tipo == val)
		return Punt->valore;
	
	primoOper = Punt->prox;
}
