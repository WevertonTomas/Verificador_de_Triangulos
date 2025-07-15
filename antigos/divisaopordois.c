#include <stdio.h>

int main(){

int numero;

printf("Digite um número: ");
scanf("%d", &numero);

printf("Seu número é: %d\n\n", numero);

    if ( numero % 2 == 0) {
        printf("O número %d é PAR.\n", numero);
    } else {
        printf("O número %d é ÍMPAR.\n", numero);
        
return 0;

}