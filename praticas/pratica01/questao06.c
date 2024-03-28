#include<stdio.h>
#include<math.h>

// 6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).

int main() { 
  int a;
  int b;
  int c;

  printf("entre com o valor de a: ");
  int deu_certo = scanf("%i", &a);
  
   printf("entre com o valor de b: ");
  deu_certo = scanf("%i", &b);
   printf("entre com o valor de c: ");
  deu_certo = scanf("%i", &c);

  double delta = b * b - 4 * a * c;
  double raiz_quadrada = sqrt(delta);
  double raiz1 = (-b + raiz_quadrada) / (2 * a);
  double raiz2 = (-b - raiz_quadrada) / (2 * a);

  printf("a raiz 1 é: %f\n", raiz1);
  printf("a raiz 2 é: %f\n", raiz2);
  
  
  
  

    









return 0;
}