#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  // criando a variável ponteiro para o arquivo
  FILE * file;

  //abrindo o arquivo
  file = fopen("C:\\Users\\lucas\\OneDrive\\Documentos\\programação\\arquivo.txt", "w");

  // escrevendo no arquivo
  fprintf(file, "Esta é a linha 1 do arquivo\n");
  fprintf(file, "Esta é a linha 2 do arquivo\n");
  fprintf(file, "Esta é a linha ... do arquivo\n");
  fprintf(file, "Esta é a linha n do arquivo\n");
  
  // fechando arquivo
  fclose(file);
  printf("O arquivo foi criado com sucesso!");
  return (0);
}