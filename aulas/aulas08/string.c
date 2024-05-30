#include <stdio.h>
#include <string.h>
int main() {    //012345678901234567890123456789
  char nome [31]; // um nome de uma pessoa qualquer\0

  printf("Entre com seu nome: ");
  int deu_certo = scanf("%[^\n]", nome);
  printf("Ola %s!\n", nome);

  char primeiro_nome[21];
  char ultimo_nome[21];
  strcpy(primeiro_nome, "jose"); //primeiro_nome "jose";
  strcpy(ultimo_nome, "junior");
  strcpy(nome, primeiro_nome);
  strcat(nome, ultimo_nome); // nome prmeiro_nome +_ ultimo_nome
  printf("%s\n", nome);
  int tamanho = strlen(nome);
  printf("seu nome tem %d letras\n", tamanho);
  printf("%s e %s sao iguais? %i\n", primeiro_nome, ultimo_nome, strcmp(primeiro_nome, ultimo_nome)); //primeiro_nome == ultimo_nome
  
  
  

 
  
  
  
  
  
  return 0;
}