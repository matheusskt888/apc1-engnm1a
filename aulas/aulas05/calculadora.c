#include <stdio.h>
#include<math.h>


int main() { 

int numero1;
int numero2;

  printf("emtre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("emtre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);
  
 int soma = numero1 + numero2;
  printf("a soma dos numeros é: %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("a subtracao dos numeros é: %i\n", subtracao);

  int multiplicacao = numero1 * numero2;
  printf("a multiplicacao dos numeros é: %i\n", multiplicacao);

  float divisao = 1.0f *  numero1 / numero2;
  printf("a divisao dos numeros é: %f\n", divisao);

 int resto = numero1 % numero2;

  printf("o restu da divisao dos numeros é: %i\n", resto);
  
// nume = numero1 +1
  // incremento
  printf("o incremento do primeiro numero é: %i\n", numero1++);
  printf("o incremento do segundo numero é: %i\n", ++numero1);

// numero = numero - 1
//decremanto 

  printf(" o decremento do primeiro numero é: %i\n", numero1--);
  printf("o decremento do segundo numero é: %i\n", --numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("a raiz quadrada do primeiro numero é: %.2f\n", raiz_quadrada);

  double potencia = pow(numero1, 3);
  printf("o numero ao cubo é: %f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("o log2 do primeiro numero é: %.3f\n", logaritmo2);
    
  const double PI = 3.1416;
double seno = sin(numero1 * (PI / 180));
  printf("o seno do primeiro numero é: %.1f\n", seno);
  double cosseno = cos(numero1);
  
  
  
  
  
  
  
  
  
  
  
  return  0;
}