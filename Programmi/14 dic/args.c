/* 	Nel caso di main chi è il programma chiamante? il sistema operativo
	main() può avere degli argomenti, che sono quelli che scriviamo dalla linea di comando.

	Il primo parametro, chiamato convenzionalmente argc (argument count), è un intero che determina il numero di parametri.
	Il secondo parametro, argv (argument vector), è un puntatore al primo elemento dell'array contenente gli argomenti,
	quindi è un'array di array, in cui ogni elemento è una stringa (un parametro):

	[0|1|2|3|4] argv --> argv[0] = [g|c|c|\0]
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	printf("Programma chiamato con %s\n", argv[0]);

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	else
		printf("Niente argomenti\n");

	return 0;
}