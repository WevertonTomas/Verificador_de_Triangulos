#include <stdio.h>

int main() {
    int n1, n2;
    int opcao;

    printf("Bem-vindo à Calculadora do Tomas!\n\n");

    printf("Insira um número: ");
    scanf("%d", &n1);
    printf("Insira outro número: ");
    scanf("%d", &n2);

    printf("\nSelecione a operação desejada:\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n");

    switch (opcao) {
        case 1:
            printf("A soma é: %d\n", n1 + n2);
            break;
        case 2:
            printf("A subtração é: %d\n", n1 - n2);
            break;
        case 3:
            printf("A multiplicação é: %d\n", n1 * n2);
            break;
        case 4:
            if (n2 == 0) {
                printf("Erro: divisão por zero não é permitida.\n");
            } else {
                printf("A divisão é: %.2f\n", (float)n1 / n2);
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    printf("\nObrigado por usar a Calculadora do Tomas!\n");

    // Limpa o buffer do teclado
    while (getchar() != '\n');
    printf("Pressione ENTER para sair...");
    getchar();  // Aguarda o ENTER final
    return 0;
}
