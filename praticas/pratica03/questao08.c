#include <stdio.h>
// 8. Faça um programa em C que calcule o fatorial de um número inteiro.


int main(){

int numero;

  printf("caulculo fatorial (n!)\n\n");
  
  printf("entre com um numero inteiro >= 0: ");
  int deu_certo = scanf(" %i", &numero);

  if(deu_certo && numero >= 0) {
     long int fatorial = 1;
     printf("%i = " , numero);
     
    for(int i = numero; i >= 1; i--) {
      fatorial = fatorial * i;
      printf("%i x " ,i);
      
       
     }

    printf("1 = %li\n", fatorial);
     } else {
    printf("numero invalido. tente de novo.\n");
    }













  
  return 0;
}