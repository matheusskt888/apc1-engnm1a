#include <stdio.h>
#include <stdlib.h>

int main() {
  int voto, votojoao = 0, votomaria = 0, vototiago = 0, votomatheus = 0, votonulo = 0, votobranco = 0, votoencerrar = 0, contador;




  for (contador = 1; contador <= 5; contador++) {
    printf("\x1b[31m---------eleição para prefeito----------\x1b[0m\n");
    printf("\x1b[34m--------------NUMERO DO VOTO%d----------- \x1b[0m\n",
           contador);
    printf("--digite [5] pra joao\n;");
    printf("--digite [10] para maria\n;");
    printf("--digite [15] para tiago\n;");
    printf("--digite [20] para matheus\n;");
    printf("--digite [0] para brasco\n;");
    printf("--digite [1] para nulo\n;");

    printf("informe seu vato:");
    int deu_certo = scanf("%d", &voto);

    switch (voto) {

    case 10:
      votojoao = votojoao + 10;

      break;
    case 15:
      votomaria = votomaria + 15;
      break;
    case 20:
      vototiago = vototiago + 20;
      break;
    case 30:
      votomatheus = votomatheus + 30;
      break;

    case 0:
      votonulo = votonulo + 0;
      break;

    case 1:
      votobranco = votobranco + 1;
      break;
    }
  }

  printf("\n resultado da eleição\n");
  printf("joao teve %d votos ", votojoao);
  printf("joao teve %d votos ", votomaria);
  printf("joao teve %d votos ", votonulo);
  printf("joao teve %d votos ", votobranco);

  printf("\n\n***RESULTADO DO NOVO PREFEITO***\n\n");

  if (("votojoao > votomaria") && ("vototiago < votomatheus")) {
    printf("\x1b[32m---------joao é o novo prefeito---------\x1b[0m");

  } else if (("votomaria > vototiago") && ("votomaria > votomatheus")) {
    printf("\x1b[32m---------maria é a nova prefeita---------\x1b[0m");

  } else if (("vototiago > votomatheus") && ("votojoao > votomaria")) {
    printf("\x1b[32m---------tiago é o novo prefeito---------\x1b[0m");

  } else if (("votomatheus > vototiago") && ("votojoao > votomaria")) {
    printf("\x1b[32m---------tiago é o novo prefeito---------\x1b[0m");
  }

  return 0;
}


