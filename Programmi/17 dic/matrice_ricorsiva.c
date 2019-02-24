typedef int Matrice[N][N];

typedef enum {false, true} boolean;

boolean Simmetrica(Matrice Mat, int Dim)
{
	int Indice;
	boolean Uguali;

	if (Dim == 1)
		return true;
	
	Uguali = true;

	for (Indice = N - Dim; Indice < N; ++Indice)
	{
		if (Mat[N-Dim][Indice] != Mat[Indice][N-Dim])
			Uguali = false;
	}
	
	if (false == Uguali)
		return false;
	else
		return (Simmetrica (Mat, Dim-1));
}