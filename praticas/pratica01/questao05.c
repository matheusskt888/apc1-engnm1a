#include <stdio.h>
// 5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).

int main(){ 
int gigabytes;
long int bytes;

  printf("emtre com o gigabytes: ");  
long int deu_certo = scanf("%i", &gigabytes);
bytes = gigabytes * 1024 * 1024 * 1024;

printf("bytes = %i\n", &bytes);

return 0;
}