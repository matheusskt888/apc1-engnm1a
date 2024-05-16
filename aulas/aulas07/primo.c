#include <stdio.h>

int main(){

int numero_primo;

 printf("emtre com um numero > 0");
int deu_certo = scanf("%i", &numero_primo);

  if( deu_certo && numero_primo > 0) {
    int qtde_devisores = 0;
for(int i=1; i<=numero_primo; i++){ 
if(numero_primo % i == 0){ 
  qtde_devisores++;
}
 }
  if (qtde_devisores == 2) { 
  printf(" o numeor %i eh primo!\n", numero_primo);
    
  } else {

printf("o numero &i eh primo\n" , numero_primo);
   }
  } else {
   printf("o numero %i naun eh primo\n");
    
  }
    } else {

    
    
    
    
    
    
    printf(" numero invalido. temte de novo!\n");
    
  }  













  return 0;
}