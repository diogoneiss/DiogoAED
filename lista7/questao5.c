#include <stdlib.h>
#include <stdio.h>

/*
Construa um programa que leia uma sequência de números naturais até que o valor zero seja lido 
(o valor zero deverá ser a flag para finalizar a leitura). Ao interromper a leitura, 
o programa deverá informar a média dos valores lidos e o maior valor entre eles.
*/
int main(){    

float entrada, soma;
int c = 0;
int flag = 0;
float maiorValor = 0;

while (entrada != flag){

printf("Insira o numero para ser adicionado. Digitar 0 encerra o programa e retorna a media.\n");
scanf("%f", & entrada);

soma += entrada;


if (entrada > maiorValor)
    maiorValor = entrada;


if (entrada != 0)
    c++;

}

printf("\aA media dos nums inseridos e %.3f.", soma/c);
printf("\n O maior valor entre os nums e %.1f", maiorValor);





return 0;



}