#include <stdio.h>

int main (){

int numero;

printf("Digite seu numero: ");
scanf("%d", &numero);

if (numero % 2 == 0){
    printf("O número é Par!\n", numero);
}
else{
    printf("O numero é Impar\n!", numero);
}


return 0;

}