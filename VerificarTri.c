#include <stdio.h>

int main() {

int l1,l2,l3;

    printf("Digite o primeiro lado: ");
    scanf("%d", &l1);
    printf("Digite o segundo lado: ");
    scanf("%d", &l2);
    printf("Digite o terceiro lado: ");
    scanf("%d", &l3);


if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2){
printf("Os valores podem se tornar um Triangulo.\n");  

    if (l1 == l2 && l2 == l3) {
        printf("Triangulo equilátero.\n");
    } else if (l1 != l2 && l2 != l3 && l3 != l1) { 
        printf("Triangulo escaleno.\n");
    } else {
        printf("Triangulo isosceles.\n");
    }
}else {
printf("Os valores informados não podem formar um triangulo\n");
}
return 0;

}
