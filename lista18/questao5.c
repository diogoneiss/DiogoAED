/*
5.	Construa uma função que calcule e retorne a diferença entre o maior valor presente acima da diagonal principal e o maior valor presente abaixo da diagonal principal de uma matriz de reais.
Projete e implemente quantos métodos julgar necessário.
*/

#include <stdio.h>
#define colunasJ 4

const int linhasI = 4;

float maiorValorAcimaDiag(float matriz[][colunasJ]);
float maiorValorAbaixoDiag(float matriz[][colunasJ]);
float diferencaMaioresValores(float acima, float abaixo);

int main(){

float matriz[][colunasJ] = {{16, 1, 1, 1},{12, 11, 10, 9},{8, 7, 6, 5},{4, 3, 2, 1}};

float acima = maiorValorAcimaDiag(matriz);
float abaixo = maiorValorAbaixoDiag(matriz);

printf("O maior, ACIMA da diag, eh %f", acima);

printf("\nO maior, ABAIXO da diag, eh %f", abaixo);

printf("\nA diferenca entre os maiores valores eh %f", diferencaMaioresValores(acima, abaixo));

    return 0;
}


float maiorValorAcimaDiag(float matriz[][colunasJ]){

float maior = matriz[0][1];

for (int i = 0; i < linhasI; i++)
{
    for (int j = 0; j < colunasJ; j++)
    {
        if(matriz[i][j] > maior && j > i) maior = matriz[i][j];
    }
    
}

return maior;
    
}

float maiorValorAbaixoDiag(float matriz[][colunasJ]){

float maior = matriz[1][0];

for (int i = 2; i < linhasI; i++)
{
    for (int j = 0; j < colunasJ; j++)
    {
        if(matriz[i][j] > maior && j < i) maior = matriz[i][j];
    }
    
}

return maior;
    
}

float diferencaMaioresValores(float acima, float abaixo){
    float dif = acima - abaixo;

    if(dif < 0) dif = dif * -1;

    return dif;
}