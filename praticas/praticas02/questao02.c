#include<stdio.h>

// 2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.

int main() {

  int numero1;
  int numero2;
  printf("entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);
  printf("entre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);
  int quociente = numero1 / numero2;
  int resto = numero1 % numero2;
  printf("o quociente eh: %i\n", quociente);
  printf("o resto eh: %i\n", resto);
  return 0;
  
























return 0;
}












