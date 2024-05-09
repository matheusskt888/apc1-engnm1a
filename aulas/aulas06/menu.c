#include<stdio.h>

int main(){ 

int opcao;

  printf("MENU PRICIPAL\n");
  printf("1 - consutura saldo\n");
  printf("2 - fazer recarga\n");
  printf("3 - listar recados\n");
  printf("4 - ligacoes feitas\n");
  printf("0 - Sair\n");
  printf("escalha uma opicao => ");
  int deu_certo = scanf("%i", &opcao);

  switch(opcao) {
    case 1: 
    printf("seu saldo eh R$ 10,00\n");
    break;
    case 2: { 
    float valor;
    printf("entre com o valor da recarga: ");
    deu_certo = scanf("%f", &valor);
    break;
       }
  case 3: 
    printf("voce nao tem recados!\n");
  break;
  case 4: 
    printf("61 9999-9999\n");
    printf("61 8888-8888\n");
    printf("61 8888-8888\n");
    printf("61 8888-8888\n");
    


     }








  
  
  
  
  
  
  
  
 return 0;
}