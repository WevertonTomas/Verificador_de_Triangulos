#include <stdio.h>

int main (){

int nota1, nota2, nota3;
float resultado;

printf("*** Bem vindo a calculadora de média Tomas schools! ***\n\n");

printf("Digite a primeira nota: \n");
scanf("%d", &nota1);
printf("Digite a segunda nota: \n");
scanf("%d", &nota2);
printf("Digite a terceira e última nota: \n");
scanf("%d", &nota3);

resultado = (float)(nota1 + nota2 + nota3) / 3;

printf("\n\n O resultado da média entre as três notas é: %.1f", resultado);

return 0;

}