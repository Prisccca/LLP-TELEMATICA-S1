#include <stdio.h>
#define STRING_SIZE 100

int main( )
{
  char nome[STRING_SIZE];
  char curso[STRING_SIZE];
  
  FILE* fp;

  printf("Para cadastro digite seu nome e curso.\n");
  fgets(nome, STRING_SIZE, stdin);
  fgets(curso, STRING_SIZE, stdin);

  if ((fp = fopen("arquivo.txt", "w"))==NULL)
  {
    printf("Ocorreu um erro. O arquivo não foi aberto.\n");
    return 1;
  } 

  fputs(nome,fp);
  fputs(curso,fp);
  fclose(fp);
   printf("Dados gravados com sucesso!");

  return 0;
}
