#include <stdio.h>

int main(){

float produto1;
float produto2;

printf("Digita o valor do Primeiro produto ");
scanf("%f", &produto1);
printf("Agora, digite o valor do outro produto ");
scanf("%f", &produto2);


if ( produto1 == produto2){
    printf("O valor do primeiro produto é igual ao do segundo");
}
else if ( produto1 <= produto2){
    printf("O valor do primeiro produto é mais barato que o do segundo");
}
else{
    printf("o segundo é mais barato");
}

return 0;

}

