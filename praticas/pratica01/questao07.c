#include<stdio.h>
#include<math.h>
// 7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

int main() { 

float altura;
float distancia;
int angulo;
 const float PI = 3.1416;
  printf("entre com a distancia: ");
  int deu_certo = scanf("%f", &distancia);
  printf("entre com o angulo: ");
  deu_certo = scanf("%i", &angulo);
 
altura = distancia*  sin(angulo * (PI / 180));
  printf("a altura alcancada foi: %f\n", altura);
  
  

return 0; 
}
  