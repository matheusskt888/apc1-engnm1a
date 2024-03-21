#include <stdio.h>
// 3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.

int main() {

  int raio;
  float pi = 3.1416;

  printf("emtre com o raio: ");
  int deu_certo = scanf("%i", &raio);

  float perimetro = 2 * pi * raio;
  printf("o perimetro foi..: %2.f\n", perimetro);
  
 

  
  
  return 0;
}