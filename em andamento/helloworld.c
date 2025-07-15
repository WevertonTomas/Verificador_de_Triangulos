#include <stdio.h>

int main()
{

    char nome[15];
    int n1, n2;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("\nOlá %s, Espero que esteja bem!\n\n", nome);
    printf("Você está acessando o ambiente da calculadora, por favor, digite dois números.\n\n");

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Agora, digite o segundo número: ");
    scanf("%d", &n2);

    printf("\nA soma dos números digitados é: %d", n1 + n2);

    printf("\n\n%s, obrigado por utilizar a nossa calculadora.\n", nome);

    return 0;
}