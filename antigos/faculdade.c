#include <stdio.h>

int main(){

char estado1[50], codCard1[50], cidade1[50], estado2[50], codCard2[50], cidade2[50];
int populacao1, pontoTuristico1, populacao2, pontoTuristico2;
float area1, pib1, area2, pib2

printf("Vai começar o Super Trunfo, Prepare-se!!!!!\n");
printf("Digite os dados da primeira carta.");

printf("Digite seu estado: ", "Ex.: A-H");
scanf("%s", estado1);
printf("Digite o seu Código: ", "Ex.: A01, B03");
scanf("%s", codCard1);
printf("Digite o Nome da Cidade: ");
scanf("%s", cidade1);
printf("Qual é o total da população? ");
scanf("%d", &populacao1);
printf("Qual a Aréa em Km² da sua Cidade? ");
scanf("%f", &area1);
printf("Digite o PIB do seu Estado: ");
scanf("%f", &pib1);
printf("Qual a quantidade de Pontos Turísticos? \n\n");
scanf("%d", &pontoTuristico1);

printf("Oba, Vi que você digitou os dados da sua Primeira Cartam agora vamos pra a segunda? Digite os dados da sua Segunda carta.\n")

printf("Digite seu estado: ", "Ex.: A-H");
scanf("%s", estado2);
printf("Digite o seu Código: ", "Ex.: A01, B03");
scanf("%s", codCard2);
printf("Digite o Nome da Cidade: ");
scanf("%s", cidade2);
printf("Qual é o total da população? ");
scanf("%d", &populacao2);
printf("Qual a Aréa em Km² da sua Cidade? ");
scanf("%f", &area2);
printf("Digite o PIB do seu Estado: ");
scanf("%f", &pib2);
printf("Qual a quantidade de Pontos Turísticos? \n\n");
scanf("%d", &pontoTuristico2);

printf("Dados inseridos, agora vamos ao comparativo!\n\n");

printf("Carta 1: ");
printf("Estado: %s", estado1);
printf("Estado: %s", codCard1);
printf("Nome da Cidade: %s", cidade1);
printf("População: %d", populacao1);
printf("Área: %f", area1);
printf("PIB: %f", pib1);
printf("Número de Pontos Turísticos: %d", pontoTuristico1);

printf("Carta 2: ");
printf("Estado: %s", estado2);
printf("Estado: %s", codCard2);
printf("Nome da Cidade: %s", cidade2);
printf("População: %d", populacao2);
printf("Área: %f", area2);
printf("PIB: %f", pib2);
printf("Número de Pontos Turísticos: %d", pontoTuristico2);

return 0;
}