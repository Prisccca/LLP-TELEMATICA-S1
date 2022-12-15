#include <stdio.h>
#include <stdlib.h>

int main(void )
{
  char ch [40] = "\nArmazenamento de Caracteres em Array\n";
  int pares[5] = {2,4,6,8,10};
  char par[4] = {'2','4','6','8'};
  int i = 0;
  
  FILE *ppares;

  if ((ppares = fopen("pares.bin", "wb"))==NULL)
  {
    printf("Ocorreu um erro. O arquivo não foi aberto.\n");
    return 1;
  } 
  
  fwrite (par,sizeof(char),4,ppares);
  fwrite (ch,sizeof(char),100,ppares);
  fwrite (pares, sizeof(int),5,ppares);
  fread(pares,sizeof(int),5,ppares);
  fread (ch,sizeof(char),100,ppares);
  fread(par,sizeof(char),4,ppares);

  printf("Vetor de caracteres: \n");
  
  for(i = 0; i <40; i++)
  {
    printf("%c",ch[i]);
  }

  printf("\nVetor de inteiros: ");
  
  for(i = 0; i < 5; i++)
  {
    printf("\n%d",pares[i]);
  }

    printf("\nVetor de Caracteres - numeros : ");
  
  for(i = 0; i < 4; i++)
  {
    printf("\n%c",par[i]);
  }

  
  fclose(ppares);

  printf("\nDados gravados com sucesso!");

  return 0;
}
