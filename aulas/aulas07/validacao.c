#include <stdio.h>



int main(){
    int numero;
    int numero_valido = 0;

     while(numero_valido == 1) { 
    printf("entre com um numero entre 1 e 10: ");
    int deu_certo = scanf("%i", &numero);

    if (deu_certo && numero > 0 && numero < 11);
     if(deu_certo && numero_valido) {
     printf("segue o jogo!\n");
  
    
     } else {


    printf("numero invalido. tente de novo!\n");
    getchar();
    }
   




    do{  
    printf("entre com um numero entre 1 e 10: ");
    int deu_certo = scanf("%i", &numero);

    if (deu_certo && numero > 0 && numero < 11);
    if(deu_certo && numero_valido) {
    printf("segue o jogo!\n");


    } else {


    printf("numero invalido. tente de novo!\n");
      getchar();
      }
     } while (numero_valido == 0);






return 0;
} 