#include<stdio.h>

int main() { 

int numero1;
int numero2;

  printf("entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("entre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);


  int iguais = numero1 == numero2;
  printf("o numero sao iguais? %i\n", iguais);


int sao_diferentes = numero1 != numero2;
  printf("o numero sao diferentes? %i\n", sao_diferentes);

  int eh_maior = numero1 > numero2; 
  printf("o primeiro numero eh maior? %i\n", eh_maior);


int eh_menor = numero1 < numero2;
  printf("o primeiro numero eh menor? %i\n", eh_menor);


  int eh_maior_igual = numero1 >= numero2;
  printf("o primeiro numero eh maior ou igual? %i\n", eh_maior_igual);

  int eh_menor_igual = numero1 <= numero2;
  printf("o primeiro numero eh menor ou igual? %i\n", eh_menor_igual);
    

    
    





  
  
  
  return 0;
}