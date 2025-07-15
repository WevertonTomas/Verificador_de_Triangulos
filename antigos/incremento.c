#include <stdio.h>

int main (){


int n1 = 1, resultado;

resultado = ++n1;
printf ("pré-incremento - numero 1: %d - resultado: %d\n", n1, resultado);

resultado = n1++;
printf ("pós-incremento - numero 1: %d - resultado: %d\n", n1, resultado);

resultado = --n1;
printf ("pré-decremento - numero 1: %d - resultado: %d\n", n1, resultado);

resultado = n1--;
printf ("pós-decremento - numero 1: %d - resultado: %d\n", n1, resultado);


}