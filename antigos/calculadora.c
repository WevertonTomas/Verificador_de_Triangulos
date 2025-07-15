#include <stdio.h>

int main (){

int n1, n2;
int soma, subtracao, multiplicacao, divisao;


printf("Bem Vindo a Calculadora do Tomas!\n\n");

printf("insira um numero ");
scanf("%d", &n1);
printf("insira outro numero ");
scanf("%d", &n2);

n1++;
n2--;
printf("O valor do primeiro numero é: %d \n", n1);
printf("O valor do segundo numero é: %d \n\n", n2);

soma = n1 + n2;  //realiza a soma dos números.
subtracao = n1 - n2; //realiza a subtração dos números.
multiplicacao = n1 * n2; //realiza a multiplicação dos números.
divisao = n1 / n2; //realiza a divisão dos números.

printf("A soma é: %d\n", soma);
printf("A subtracao é: %d\n", subtracao);
printf("A multiplicacao é: %d\n", multiplicacao);
printf("A divisao é: %d\n", divisao);

return 0;

}