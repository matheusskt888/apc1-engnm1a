#include <stdio.h>
// 4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.


int main() {

float preco_inicial = 100.0f;
const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;

  printf("emtre com o preco inicial: ");
  int deu_certo = scanf("%f", &preco_inicial);

  

  float preco_final = (preco_inicial + ICMS + COFINS + PIS_PASEP);

  printf("prcio final = %f\n", preco_final);
  return 0;
}
  
  

  

  
  
  
  
  
  
  