#include<stdio.h>

  int main() {
    /*4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%*/  


  float preco_inicial = 100.0f;

  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;

  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  printf("O preco inicial = %.2f\n", preco_inicial);
  printf("preco final =%f\n", preco_final);


  float valor_icms = ICMS * preco_inicial;
  float valor_cofins = COFINS * preco_inicial;
  float valor_pispasep = PIS_PASEP * preco_inicial;

   preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

    printf("preco_inicial = %f\n", preco_inicial);
    printf("valor ICMS = %f\n", valor_icms);
    printf("valor COFINS = %f\n", valor_cofins);
    printf("valor PIS_PASEP = %f\n", valor_pispasep);
    printf("preco final = %f\n", preco_final);

    return 0;
  }

  
  