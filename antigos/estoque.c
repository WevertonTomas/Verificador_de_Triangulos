#include <stdio.h>

int main(){

char produto1[30] = "Produto 1";
char produto2[30] = "Produto 2";

unsigned int estoque1 = 1000;
unsigned int estoque2 = 2000;

float valor1 = 9.50;
float valor2 = 13.55;

unsigned int estoqueMinimo1 = 500;
unsigned int estoqueMinimo2 = 5500;

double valorTotal1;
double valorTotal2;

int resultado1;
int resultado2;

printf("O produto %s tem estoque %u e o valor unitário é: R$ %.2f\n", produto1, estoque1, valor1);
printf("O produto %s tem estoque %u e o valor unitário é: R$ %.2f\n", produto2, estoque2, valor2);

resultado1 = estoque1 >= estoqueMinimo1;
resultado2 = estoque2 >= estoqueMinimo2;

printf("O Produto %s tem estoque minimo %d\n", produto1, resultado1);
printf("O Produto %s tem estoque minimo %d\n", produto2, resultado2);

printf("Valor total 1 (R$ %.2f) é maior que valor total 2 (R$ %.2f)? %d\n\n", estoque1 * valor1, estoque2 * valor2,(estoque1 * valor1) < (estoque2 * valor2));

printf(" 1 = SIM \n 0 = NÃO\n\n");

return 0;

}