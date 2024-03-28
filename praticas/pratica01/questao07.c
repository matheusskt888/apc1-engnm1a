#include<stdio.h>
#include<math.h>
// 7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

int main() { 

int altura;
int distancia;
int angulo;
 printf("entre com a altura: ");
  int deu_certo = scanf("%i", &altura);
  printf("entre com a distancia: ");
  deu_certo = scanf("%i", &distancia);
  printf("entre com o angulo: ");
  deu_certo = scanf("%i", &angulo);
 
float altura_alcancada = altura / sin(angulo);
  printf("a altura alcancada foi: %f\n", altura_alcancada);
  
  

return 0; 
}
  