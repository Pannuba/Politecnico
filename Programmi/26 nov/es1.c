#include <stdio.h>

typedef enum {false, true} bool;

typedef struct El
{
	int info;
	struct El *prox;
} TipoElemento;

//typedef TipoElemento* Lista;		/* Senza typedef scrivo TipoElemento* e non Lista */
									/* Lista è un puntatore al primo elemento della lista dinamica */

TipoElemento* inizializza()
{
	return NULL;
}

TipoElemento* RiempiLista()
{
	TipoElemento *temp;
	int num;
	scanf("%d", &num);
	
	
}

void stampaLista(TipoElemento* Testa)
{
	
}

bool contieneDoppioni(TipoElemento* Testa)
{
	
}

int main()
{
	TipoElemento *ciao = inizializza();
	ciao = riempiLista();
	stampalista(ciao);
	
	if (contieneDoppioni(ciao))
		printf("La lista contiene numeri ripetuti");
	
	else
		printf("La lista non contiene numeri ripetuti");
	
	return 0;
}
