#include <stdio.h>

int main(){

float moto = 7.90;
float carro = 8.59;
float aviao = 8.60;

if (carro == moto && carro == aviao){
    printf("Carro, Moto e Avião são iguais.");
}
else if(carro >= moto && carro >= aviao){
    printf("Carro é melhor!");
}
else if(moto >= carro && moto >= aviao){
    printf("Moto é melhor!");
}
else{
    printf("Avião é melhor!");
}

return 0;

}