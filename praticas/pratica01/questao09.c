#include<stdio.h>
// 9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.


int main() {

int idade;
  int anos;
int meses;
  int dias;
  int total_dias;
  printf("entre com a idade: ");
  int deu_certo = scanf("%i", &idade);

printf("entre com o anos: ");
  deu_certo = scanf("%i", &anos);

  printf("entre com o meses: ");
  deu_certo = scanf( "%i", &meses);


  printf("entre com o dias: ");
  deu_certo = scanf( "%i", &dias);
  
  total_dias = (anos * 365) + (meses * 30) + dias;
  printf("o total de dias é: %i\n", total_dias);
 deu_certo = scanf("%i", &total_dias);
  
  

  
  

  
  
  
  
  













return 0;
}