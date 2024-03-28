#include<stdio.h>

// 8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).


int main() {

  int horas;
  int minutos;
  int segundos;

  printf("entre com o valor da horas: ");
  int deu_certo = scanf("%i", &horas);

  printf("entre com o valor do minutos: ");
  deu_certo = scanf("%i" , &minutos);

  printf("Etre com o valor do segundos: ");
  deu_certo = scanf("%i", &segundos);

  int total_segundos = horas * 3600 + minutos * 60 + segundos;
  printf("o total de segundos é: %i\n", total_segundos);

  





  
  
  
  
  return 0;
}