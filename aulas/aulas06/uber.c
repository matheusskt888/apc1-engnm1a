#include<stdio.h>

int main(){

int avaliacao;

printf("entre com a avaliacao: ");
int deu_certo = scanf("%i", &avaliacao);

  switch(avaliacao){ 
  case 1: printf("o motorista ganhou *\n"); break;
  case 2: printf("o motorista ganhou **\n"); break;
  case 3: printf("o motorista ganhou ***\n"); break;
  case 4: printf("o motorista ganhou ****\n"); break;
  case 5: printf("o motorista ganhou *****\n");break;
  default: printf("avaliaçao invalida. tente novamente\n"); 
  }


return 0;
}