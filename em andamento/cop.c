#include <stdio.h>

int main(){

int n1, n2;
char nome[15];
float resultado;

printf("Bem vindo a calculadora de soma do Tomas!\n");
printf("\nPara iniciar, digite seu nome: ");
scanf("%s", nome);
printf("\nOlá, %s. Seja bem vindo.\n", nome);
printf("\nAgora, digite um número: ");
scanf("%d", &n1);
printf("\nDigite o segundo número: ");
scanf("%d", &n2);

resultado = n1 + n2;

printf("\n%s, A soma dos números informados é: %.2f\n", nome, resultado);







}