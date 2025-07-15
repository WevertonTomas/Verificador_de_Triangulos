#include <stdio.h>

int main(){

float nota;

printf("Digita a nota do estudante: ");
scanf("%f", &nota);

if ( nota >= 6){
    printf("A pessoa está aprovada.");
}
else if (nota >= 4.0 && nota < 5.9){
    printf("Ela precisará fazer a recuperação.");
}

else{
    printf("O estudante está reprovado.");
} 

return 0;

}