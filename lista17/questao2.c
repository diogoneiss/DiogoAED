#include <stdio.h>
#include <stdbool.h>

#define TAM_J1 2
#define TAM_J2 2

// 2.	Construa um método que recebe duas matrizes de reais e retorne verdadeiro, se forem exatamente iguais, e falso, caso contrário.

const int TAM_I1 = 3;
const int TAM_I2 = 3;


void printarMatriz(int matriz[TAM_I1][TAM_J1]);
bool seremIguais(int matrizA[TAM_I1][TAM_J1], int matrizB[TAM_I1][TAM_J1]);

int main(){

    int matrizA[][TAM_J1] = {{2,3}, {5,6}, {7,8}};

    int matrizB[][TAM_J1] = {{9,10}, {11,12}, {13,14}};

    if(seremIguais(matrizA, matrizB)){
        puts("As matrizes sao iguais");
    }
    else
    {
        puts("Elas nao sao iguais");
    }
    
   
return 0;

}

void printarMatriz(int matriz[TAM_I1][TAM_J1]){

    for (int i = 0; i < TAM_I1; i++)
    {
        for (int j = 0; j < TAM_J1; j++)
        {
            printf("%d\t", matriz[i][j]);
        }

        printf("\n");
        
    }

    printf("\n\n");
}

bool seremIguais(int matrizA[TAM_I1][TAM_J1], int matrizB[TAM_I1][TAM_J1]){

bool serIguais = true;
int i = 0;
int j = 0;

while (serIguais && i < TAM_I1){

    while (serIguais && j < TAM_J1){

        if(matrizA[i][j] != matrizB[i][j]) serIguais = false;
        j++;
    }

i++;

}

return serIguais;

}