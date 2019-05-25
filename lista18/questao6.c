/*
6.	Construa uma função que calcule e retorne a soma dos valores de uma determinada coluna da matriz. Argumentos do método: uma matriz de reais e um valor inteiro relativo à coluna a ser somada.
Valor de retorno: um valor real relativo à soma de uma coluna da matriz.
*/

#include <stdio.h>
#define colunasJ 4

const int linhasI = 4;

void inserirColuna(int *colPtr);
float somatorioColuna(float matriz[][colunasJ], int j);

int main(){

    float matriz[][colunasJ] = {{16, 1, 1, 1},{12, 11, 10, 9},{8, 7, 6, 5},{4, 3, 2, 1}};

    int coluna;

    inserirColuna(&coluna);

    printf("O somatorio da coluna %d eh %.2f", coluna, somatorioColuna(matriz, coluna));

    return 0;
}

float somatorioColuna(float matriz[][colunasJ], int j){

/* sera parametrizado a coluna j*/

float total = 0;

for (int i = 0; i < linhasI; i++)
{
    total += matriz[i][j];
}

return total;

}

void inserirColuna(int *colPtr){

    int coluna;

    printf("Insira a coluna que queres somar: ");
    scanf("%d", & coluna);


    while(coluna > colunasJ || coluna < 0){

        printf("\nEntrada incorreta. Insira a coluna que queres somar: ");
        scanf("%d", & coluna);

    }

    *colPtr = coluna;

}
