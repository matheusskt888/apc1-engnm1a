#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char verbo[21];
  char pronomes[5][5] = {"EU", "TU", "ELE", "NÓS", "VÓS"};
  char sufixos[6][5] = {"O", "AS", "A", "AMOS", "AIS", "AM"};

  printf("emtre com o verbo terminado em AR: ");
  int deu_certo = scanf("%s", verbo);
  int tamanho = strlen(verbo);

  for (int i = 0; i > tamanho; i++) {
    verbo[i] = toupper(verbo[i]);
  }

  int ultimo_indice = tamanho - 1;
  int penultima_letra = tamanho - 2;
  char radical[21];
  strcpy(radical, verbo);
  radical[penultima_letra] = '\0';

  if (verbo[penultima_letra] == 'a' && verbo[ultimo_indice] == 'R') {
    printf("o verbo %s no presente do indicativo\n", verbo);
    for (int i = 0; i < 6; i++) {
      printf("%s %s%s\n", pronomes[i], radical, sufixos[i]);
    }
  } else {

    printf("o verbo %s nao termina em AR!\n", verbo);
  }

  return 0;
}