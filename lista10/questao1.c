#include <stdlib.h>
#include <stdio.h>


/***************************************************************
 * Assinatura da função: 
 * Data da elaboração: 9/4/19
 * Autor: Diogo Neiss
 * Objetivo: Calcular o maior entre dois numeros reais
 * Dados de entrada (argumentos): num1, num2
 * Dado de saída (valor gerado pela função): maior valor entre eles
 ****************************************************************
 */


float maiorNum(float num1, float num2);
float entrada();


int main(){

float num1, num2, resposta;

num1 = entrada();
num2 = entrada();

resposta = maiorNum(num1, num2);

printf("\n O maior numero e %f", resposta);


    return 0;
} 

float maiorNum(float num1, float num2){

    float maior = 0;

    if (num1 > num2){
        maior = num1;
    }
    else{
        maior = num2;
    }


return maior;

}

float entrada(){
    float entrada;
    printf("\nInsira um numero: ");
    scanf("%f", & entrada);

    return entrada;
}