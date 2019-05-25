/*
4.	Construa uma função que calcule e retorne o maior valor acima da diagonal principal de uma matriz de reais (não considerar a própria diagonal).
*/

#include <stdio.h>
#define colunasJ 4

const int linhasI = 4;

float maiorValorDiag(float matriz[][colunasJ]);

int main(){

float matriz[][colunasJ] = {{16, 1, 1, 1},{12, 11, 10, 9},{8, 7, 6, 5},{4, 3, 2, 1}};

printf("O maior valor da matriz, acima da diagonal, e %f", maiorValorDiag(matriz));

    return 0;
}

float maiorValorDiag(float matriz[][colunasJ]){

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