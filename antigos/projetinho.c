 #include <stdio.h>
 #include <string.h>

 int main(){

    int idade, matricula, numero1,numero2;
    float altura;
    char nome[100], resposta[50];

    printf("Digite sua idade: ");
    scanf("%i", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua matricula: ");
    scanf("%i", &matricula);


printf("\nOs dados cadastrais do Aluno são: \n\n");
printf("Nome do Aluno: %s\n", nome);
printf("Sua idade é: %i\n", idade);
printf("Sua altura é: %.2f\n", altura);
printf("Sua matricula é: %i\n\n", matricula);

printf("Seja bem vinda, %s!!! Muito bom ter você aqui! ;)\n", nome);


printf("Digite um numero: \n");
scanf("%d", &numero1);
printf("Digite outro numero: \n");
scanf("%d", &numero2);

printf("A soma desses dois números é: %d \n", numero1 + numero2);
printf("Você deseja subtrair esse numero? (sim/nao): ");
scanf("%20s", resposta);

if (strcmp(resposta, "nao") == 0) return 0;

printf("O valor da subtração entre os números informados é: %d", numero1 - numero2);

return 0;

}