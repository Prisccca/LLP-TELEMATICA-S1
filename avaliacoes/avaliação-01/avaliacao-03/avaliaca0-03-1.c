#include <stdio.h>
#include <string.h>

void reverseString (char *string1)

{
	int i , len, v_temp;
	len = strlen(string1);
	
	for ( i = 0; i < len/2; i++)
	{
		v_temp = string1[i];
		string1[i] = string1[len - i - 1];
		string1 [ len - i - 1 ] = v_temp;
	}
}

int main ()
{
	char string[100];
	printf("______________________________________________________\n");
	printf ("Mostrar uma palavra ao contrario em C : \n");
	printf("______________________________________________________\n");
	printf ("Digite uma palavra sem espacos: ");
	gets(string);
	printf (" \n Antes da reversao: %s \n", string);
	
	reverseString(string);
	printf("Depois de reverter: %s" , string);
	
	
}
