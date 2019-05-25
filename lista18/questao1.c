/*
1.	Construa uma função que verifique se um valor real está presente ou não em uma matriz.
Argumentos do método: uma matriz de reais e um valor real chave da pesquisa.
Valor de retorno: verdadeiro, se a chave estiver presente na matriz, ou falso, caso contrário.
*/

#include <stdio.h>
#include <stdbool.h>
#define colunasJ 3
#define linhasI 2

bool chaveNaMatriz(float matriz[][colunasJ], float chave);


int main(){


float matriz[linhasI][colunasJ] = {{5, 6,1}, {5, 7,8}};


if(chaveNaMatriz(matriz, 5))
    puts("Chave encontrada");

    return 0;
}

bool chaveNaMatriz(float matriz[][colunasJ], float chave){

    bool chaveEncontrada = false;

    int i = 0; int j;

    while(!chaveEncontrada && i < linhasI){
        j = 0;
        

        while (!chaveEncontrada && j < colunasJ )
        {
            if(matriz[i][j] == chave) chaveEncontrada = true;
            j++;
        }
        i++;
    }


return chaveEncontrada;

}