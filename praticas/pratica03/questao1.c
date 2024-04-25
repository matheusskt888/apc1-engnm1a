#include<stdio.h>
// 1. Faça um programa em C que determine se um número inteiro lido é par ou ímpar.

int main() {

  int numero;
  

   
  printf("emtre com o numero inteiro: ");
int deu_certo = scanf("%i", &numero);
  
if (deu_certo) {
int numero_eh_divisivel_por_2 = numero % 2 == 0;
  if (numero_eh_divisivel_por_2){ 
    
  printf("o numero eh par? %i\n", numero);
  } else {
    printf("o numero %i eh impar!\n", numero);
    }
    } else { 
   printf(" numeo invalido! tente novamente\n");
    
    }


















return 0;
}