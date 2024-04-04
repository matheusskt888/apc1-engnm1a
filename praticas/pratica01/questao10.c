#include<stdio.h>

// 10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).


int main(){
int numero;
int unidade;
  int dezena;
  int centena;
  int milhar;

  printf("entre com o numero: ");
  int deu_certo = scanf("%i", &numero);
  

  unidade = numero % 10;
  dezena = (numero / 10) % 10;
  centena = (numero / 100) % 10;
  milhar = (numero / 1000) % 10;
  printf("unidade: %i\n", unidade);
  deu_certo = scanf("%i", &unidade);
  printf("dezena: %i\n", dezena);
  deu_certo = scanf("%i", &dezena);
  printf("centena: %i\n", centena);
  deu_certo = scanf("%i", &centena);
  printf("milhar?: %i\n", milhar);
  deu_certo = scanf("%i", &milhar);
  


  











return 0;
}