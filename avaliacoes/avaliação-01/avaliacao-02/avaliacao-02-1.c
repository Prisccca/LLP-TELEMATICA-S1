#include <stdio.h>

int main()
{
	int i = 0;

	while (i < 10) {
		
	  if (i %2 ==0 &&i % 4 == 0) {
	  	printf("%d\n", i);  
	  } 
	  //else { continue; } quando colocado imprime apenas 0;
	  i++;
	}
	
	return 0;
}
