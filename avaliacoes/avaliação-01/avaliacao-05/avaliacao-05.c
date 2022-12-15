#include <stdio.h>
#define TAMANHO 100

int main( )
{
  char texto[TAMANHO];
  FILE* fp;

  printf("Digite o texto que deseja gravar no arquivo.\n");
  fgets(texto, TAMANHO, stdin);

  if ((fp = fopen("arquivo.txt", "w"))==NULL)
  {
    printf("O arquivo não pode ser aberto.\n");
    exit(1);
  }

  fputs(texto,fp);
  fclose(fp);

  return 0;
}
