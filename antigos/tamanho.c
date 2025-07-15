#include <stdio.h>

int main (){

char tamanho;

printf("Digite o tamanho da Camisa (P, M ou G): ");
scanf("%c", &tamanho);

if(tamanho == 'P' || tamanho == 'p'){
    printf("Você escolheu o tamanho P (Pequeno).");
}
else if(tamanho == 'M' || tamanho == 'm'){
    printf("Você escolheu o tamanho M (Médio).");
}
else if(tamanho == 'G' || tamanho == 'g'){
    printf("Você escolheu o tamanho G (Grande).");
}
else {  
    printf("Tamanho inválido.");
}

return 0;

}