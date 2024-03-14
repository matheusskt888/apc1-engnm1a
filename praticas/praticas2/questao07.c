
// *7Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.*
  
  #include <stdio.h>

int main() {
float valor_hora_trabalho = 150.00;
float total_horas_trabalhadas = 100;

  const float IR = 0.25f;
  const float INSS = 0.11f;
  float salario_bruto = valor_hora_trabalho * total_horas_trabalhadas;
  float imposto_renda = salario_bruto * IR;
  float imposto_previ = salario_bruto *INSS;
  float salario_liquido = salario_bruto - imposto_renda - imposto_previ;


  printf("\x1b[31m------------------------------\x1b[0m\n");
  printf("\x1b[42m    C A N T R A C H E Q U E   \x1b[0m\n");
  printf("\x1b[31m------------------------\x1b[0m\n"); 
  printf("salaria bruto....: R$ %8.2f\n", salario_bruto);
  printf("Imposto de renda.: R$ %8.2f\n", imposto_renda);
  printf("Imposto previ....: R$ %8.2f\n",imposto_previ);
  printf("msalario liquido..: R$ %8.2f\n", salario_liquido);
  
  
  return 0;
}