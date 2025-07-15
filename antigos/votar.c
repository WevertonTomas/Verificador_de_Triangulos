#include <stdio.h>

int main(){

int idade;

printf("Digita sua idade: ");
scanf("%d", &idade);

if (idade >= 16){
    printf("A pessoa está apta para votar.");
}
else{
    printf("Ela não pode votar");
}

return 0;

}