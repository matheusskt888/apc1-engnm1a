#include <stdio.h>

int main() {
 printf("\x1b[33m-------------------\n");
  printf("   N O T A   L E G A L    \n");
  printf("------------------\x1b[0m\n");
  printf("\x1b[36mITEM          QTD    VALOR \x1b[0m\n");
  printf("%-13s %03i %8.2f\n", "banana nanica", 1, 15.00);
  printf("%-13s %03i %8.2f\n", "maca fufi", 10, 50.00); 
  printf("%-13s %03i %8.2f\n", "Uva globo",5,  26.00);
  printf("\x1b[31m-------------------\x1b[0m\n");
  printf("\x1b[34mTOTAL.....: R$ %8.2f\x1b[0m\n",   91.00);
  
  
  
  return 0; 
}