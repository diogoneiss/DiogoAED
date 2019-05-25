/*
3.	Construa uma função que retorne verdadeiro se a primeira linha de uma matriz de reais for igual à sua diagonal principal, e falso, caso contrário.
Argumento: Uma matriz quadrada de reais.

*/

#include <stdio.h>
#include <stdbool.h>
#define colunasJ 3
#define linhasI 3

bool DiagIgual(float matriz[][colunasJ]);


int main(){


float matriz[linhasI][colunasJ] = {{5, 3,1}, { 4, 3, 1}, {3,1,1}};


if(DiagIgual(matriz))
    puts("Linha 0 e diagonal sao iguais");

else
    puts("Linha 0 e diagonal nao sao iguais");


    return 0;
}

bool DiagIgual(float matriz[][colunasJ]){

    bool linhasIguais = true;
    int diagI = 0;
    

    int j = 0;

    while(linhasIguais && j < colunasJ && diagI < linhasI){
        if (matriz[0][j] != matriz[diagI][j]) linhasIguais = false;

        j++;
        diagI++;
    }

return linhasIguais;

}