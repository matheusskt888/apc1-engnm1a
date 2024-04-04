#include<stdio.h>

// 8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).


int main() {
  
  int segundos; 


  
printf("digite o segundos para calcular: ");
  int deu_certo = scanf("%i", &segundos);

  int horas = segundos / 3600;
  int minutos = (segundos % 3600) / 60;
  int segundos_restantes = segundos % 60;
  printf("%i segundos correspondem a %i horas, %i minutos e %i segundos.\n", segundos, horas, minutos, segundos_restantes);
  
    
    




  int total_segundos = horas * 3600 + minutos * 60 + segundos;
  printf("o total de segundos é: %i\n", total_segundos);

  





  
  
  
  
  return 0;
}