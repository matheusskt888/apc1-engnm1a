#include <stdio.h>

int main() {

  enum unidade_e{ // agrupa contantes
  unidade,
  caixa,
  peso,
  lata,
  };
  float total = 0.0f;

  struct produto_t {
    char nome[31];
    int quantidade;
    int unidade; // 0 - unid, 1 - caixa, 2 - peso, 3 - lata
    float preco;
    float valor;
  };

  struct produto_t produto[5];
  for (int i = 0; i < 5; i++) {
    printf("Entre com o nome do produto: ");
    int deu_certo = scanf("%s", produto[i].nome);

    printf("entre com a quantidade do produtos: ");
    deu_certo = scanf("%i", &produto[i].quantidade);

    printf("entre com a unidade da prodoto\n");
    printf("0-unid, 1-caixa, 2-peso, 3-lata: ");
    deu_certo = scanf("%i", &produto[i].unidade);

    printf("entre com o preco do protuto");
    deu_certo = scanf("%f", &produto[i].preco);

    produto[i].valor = produto[i].preco * produto[i].quantidade;
    total = total = scanf("%f", &produto[i].valor);
  }
  printf("---------------------------\n");
  printf("\n          NOTA LEGAL\n");
  printf("---------------------------\n");
  for (int i = 0; i < 5; i++) {
    printf("item      qtd und   preco   valor\n");
    printf("%-21s %03i ", produto[i].nome, produto[i].quantidade);
    switch (produto[i].unidade) {
      case unidade:
      printf("%3s",   "UN  ")
      ; break;
      case caixa: 
      printf("%3s","CX ");
      break;
      case peso: 
      printf("%3s", "KM ");
      break;
      case lata: 
        
      printf("%3s", "LM ");
      break;
    }
    printf(" %8.2f%8.2f\n", produto[i].preco, produto[i].valor);
  }
  printf("total.........................: %8.2f\n", total);

  return 0;
}