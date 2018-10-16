#include <stdio.h>

int main(){
	
	char carattere, convertito;
	printf("Inserire un carattere minuscolo: ");
	scanf("%c", &carattere);
	
	switch (carattere){
	
		case 'a':
			convertito = 'A';
			break;
		
		case 'b':
			convertito = 'B';
			break;
			
		case 'c':
			convertito = 'C';
			break;
			
		case 'd':
			convertito = 'D';
			break;
			
		case 'e':
			convertito = 'E';
			break;
			
		case 'f':
			convertito = 'F';
			break;
			
		case 'g':
			convertito = 'G';
			break;
			
		case 'h':
			convertito = 'H';
			break;
			
		case 'i':
			convertito = 'I';
			break;
			
		case 'j':
			convertito = 'J';
			break;
			
		case 'k':
			convertito = 'K';
			break;
			
		case 'l':
			convertito = 'L';
			break;
			
		case 'm':
			convertito = 'M';
			break;
			
		case 'n':
			convertito = 'N';
			break;
			
		case 'o':
			convertito = 'O';
			break;
			
		case 'p':
			convertito = 'P';
			break;
			
		case 'q':
			convertito = 'Q';
			break;
			
		case 'r':
			convertito = 'R';
			break;
			
		case 's':
			convertito = 'S';
			break;
			
		case 't':
			convertito = 'T';
			break;
			
		case 'u':
			convertito = 'U';
			break;
			
		case 'v':
			convertito = 'V';
			break;
			
		case 'w':
			convertito = 'W';
			break;
			
		case 'x':
			convertito = 'X';
			break;
			
		case 'y':
			convertito = 'Y';
			break;
			
		case 'z':
			convertito = 'Z';
			break;
				
		}
		
	printf("Il carattere convertito e' %c\n", convertito);

	return 0;
}
