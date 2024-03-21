#include <stdio.h>

// 1. Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.

int main(){ 
  
float a1;
float a2;
  
  printf("emtre com a media: ");
  int deu_certo = scanf("%f", &a1);

  printf("emtre com a nota fina: ");
  deu_certo = scanf("%f", &a2);
  

  float media = (0.4 * a1) + (0.6 * a2);
  printf("a media foi..: %2.f\n", media);

return 0; 
}

  