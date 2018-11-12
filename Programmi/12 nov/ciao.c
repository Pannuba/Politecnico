// ((2.0 + (3.0 - 18.5)) * ((7.5 - 6.0) / 3.0))
// [tipo] --> valore, operatore, parentesiaperta, parentesichiusa
// ['+'] [3.0]

/* Vedi beep */

typedef enum {valore, operatore, parentesiAperta, parentesiChiusa} tipoElemento;

typedef struct {
	tipoElemento tipo;
	char qualeOperatore;
	float qualeValore;
} elemento;

float calcola (elemento *E)

{
	if (op == '+')
		return (calcola(punt1) + calcola(punt2));
	
	else if (op == '-')
		return (calcola(punt1) - calcola(punt2));
	
	else if (op == '*')
		return (calcola(punt1) * calcola(punt2));
	
	else if (op == '/')
		return (calcola(punt1) / calcola(punt2));
}

float calco...

{
	elemento *punt1, *punt2, *punt;
	char op;
	int diff = 0;
	
	if (*E.tipo == valore)
		return *E.qualeValore;
	
	punt1 = E++; /* Parentesi aperta */
	
	if (punt1 -> tipo == parentesiAperta)
		diff++;
	
	while (diff > 0)
	
	{
		if (punt -> tipo == parentesiAperta)
			diff++;
		
		if (punt -> tipo == parentesiChiusa)
			diff--;
		
		punt++;
	}
	
	op = punt -> qualeOperatore;
	punt2 = punt++;
