typedef struct El
{
	enum{oper, val} tipo;
	char operatore;
	float valore;
	struct El *next;
} Elemento;

float Calcola(Elemento *Punt)
{
	Elemento *PrimoOperando, *SecondoOperando;
	Elemento *Cursore;
	int diffValOper;
	
	if (Punt->tipo == val)
		return (Punt->valore);
	/* caso base, non ricorsivo */
	PrimoOperando = Punt -> next;
	/* localizza il primo operando */
	diffValOper = -1;
	/* trovato un operatore */
	Cursore = Punt -> next;
	/* localizza il secondo operando */
	
	while (diffValOper < 0)
	{
		if(Cursore->tipo == val)
			diffValOper++ 
		else
			diffValOper--;
	
		Cursore = Cursore -> next;
	}
	
	SecondoOperando = Cursore;
	
	if (Punt->operatore == ‘+’)
		return (Calcola(PrimoOperando) + Calcola(SecondoOperando));
	if (Punt->operatore == ‘-‘)
		return (Calcola(PrimoOperando) - Calcola(SecondoOperando));
	if (Punt->operatore == ‘*’)
		return (Calcola(PrimoOperando) * Calcola(SecondoOperando));
	if (Punt->operatore == ‘/‘)
		return (Calcola(PrimoOperando) / Calcola(SecondoOperando))
