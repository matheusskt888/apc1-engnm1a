#include <stdio.h>


// 2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.

int main(){ 
float base;
float altura;


  printf("emtre com a base: ");
 int deu_certo = scanf("%f", &base);

  printf("emtre com a altura: ");
  deu_certo = scanf("%f", &altura);



  float area = (base * altura) / 2;
  printf("a area foi..: %2.f\n", area);
  
  
  
  return 0; 
}