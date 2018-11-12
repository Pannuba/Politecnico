#define MAX 10

typedef enum {false, true} bool;
typedef int matrice[MAX][MAX];

bool isSymmetrical(matrice m, int n)

{
	int i;
	
	if (n == 1)
		return true;
	
	if (simmetrica(m, n - 1) == false)
		return false;
	
	for (i = 0; i < n; i++)		/* Oppure i < n - 1 */
	
	{
		if (m[i][n - 1] != m[n - 1][i])
			return false;
	}
	
	return true;
}

int diffDiag(matrice m, int iniz, int fin)

{
	if (iniz >= fin)
		return 0;
	
	return (diffDiag(m, iniz + 1, fin - 1) + m[iniz][iniz] + m[fin][fin] - m[iniz][fin] - m[fin][iniz]);
}

int cifraMassima(int n)

{
	int temp;
	
	if (n < 10)
		return n;
	
	temp = cifraMassima(n/10);
	
	if (n % 10 >= temp)
		return (n % 10);
	
	else
		return temp;
}

//Merge sort: prendo due stringhe ordinate e le attacco. Collegato alla ricorsione?
