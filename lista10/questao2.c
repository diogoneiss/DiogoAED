#include <stdlib.h>
#include <stdio.h>


/***************************************************************
 * Assinatura da função: somar()
 * Data da elaboração: 9/4/19
 * Autor: Diogo Neiss
 * Objetivo: calcular a soma de dois valores reais 
 * Dados de entrada (argumentos): num1, num2
 * Dado de saída (valor gerado pela função): soma dos dois;
 ****************************************************************
 */


float somar(float num1, float num2);
float entrada();


int main(){

float num1, num2, resposta;

num1 = entrada();
num2 = entrada();

resposta = somar(num1, num2);

printf("\n A soma dos numeros e %.2f \n", resposta);


    return 0;
} 

float somar(float num1, float num2){

    float soma = num1 + num2;


return soma;

}

float entrada(){

    float entrada;
    printf("\nInsira um numero: ");
    scanf("%f", & entrada);

    return entrada;
}
