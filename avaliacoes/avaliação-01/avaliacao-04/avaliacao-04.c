#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int l, c, soma ;
	int matriz[5][10];
	int somaLinhas[5];
	
	srand(time(NULL));
	
	for ( l = 0; l < 5; l++){
		for ( c= 0;  c < 10; c++){
			matriz[l][c] = rand() % 100;
		}
	}
	
		for ( l = 0; l < 5; l++){
			soma = 0;
				for ( c= 0;  c < 10; c++){
					soma += matriz[l][c];
		}
		somaLinhas[l] = soma;
	}
	
	printf ("\n Matriz: \n");
	
		for ( l = 0; l < 5; l++){
			for ( c= 0;  c < 10; c++){
				printf ("%2d ", matriz[l][c]);
		}
		
		printf ("\n");
		
	}
	
	printf ("\n Vetor com a soma das linhas:  \n");
			for ( l = 0; l < 5; l++){
				printf ("Linha %d: %d\n", l , somaLinhas[l]);
		}
		
	
	return 0 ;
	
	
	
	
}
