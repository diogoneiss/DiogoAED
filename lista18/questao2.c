/*
2.	Construa uma função que retorne verdadeiro se a primeira linha de uma matriz quadrada de reais for igual à sua última linha, e falso, caso contrário.
Argumento: Uma matriz quadrada de reais.

*/

#include <stdio.h>
#include <stdbool.h>
#define colunasJ 3
#define linhasI 3

bool linhaIgualUltimaLinha(float matriz[][colunasJ]);


int main(){


float matriz[linhasI][colunasJ] = {{5, 6,1}, {5, 3, 1}, {5, 6, 1}};


if(linhaIgualUltimaLinha(matriz))
    puts("Linhas sao iguais");

else
    puts("Linhas nao sao iguais");


    return 0;
}

bool linhaIgualUltimaLinha(float matriz[][colunasJ]){

    bool linhasIguais = true;

    int j = 0;

    while(linhasIguais && j < colunasJ){
        if (matriz[0][j] != matriz[linhasI - 1][j]) linhasIguais = false;
        j++;
    }

return linhasIguais;

}