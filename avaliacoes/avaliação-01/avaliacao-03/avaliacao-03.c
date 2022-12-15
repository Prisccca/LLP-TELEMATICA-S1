#include <stdio.h>
#include <math.h>

int squareFunction ( int a, int b, int c) {
	int z;
	float delta , x1, x2;
	printf ("_________________________________________\n");
	printf ("%d\n%d\n%d\n",a,b,c);
	
	delta = pow(b,2) - (4*a*c);
	
	printf(" Delta: %.2f", delta);
	
	if (delta < 0) {
		printf ("\n Nao ha raizes nos reais");
	}
	
	else if ( delta == 0) {
		x1 = (-b+sqrt(delta))/(2*a);
		printf ("\n X1 e X2 sao iguais a :");
		printf ("\n %.2f", x1);
	}
	
	else if ( delta > 0) {
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
			printf ("\n As raizes  sao iguais a :");
			printf ("\n X1 = %.2f", x1);
			printf ("\n X2 = %.2f", x2);		
	}
	
	return delta;
}

int main ()
{
	int x , y, z;
	float raizes;
	
	printf ("Digite 3 numeros inteiros: ");
	scanf ("%d%d%d", &x, &y, &z);
	
	raizes = squareFunction (x, y ,z);
}
