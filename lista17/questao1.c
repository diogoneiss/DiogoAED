#include <stdio.h>
#define TAM_J1 2
#define TAM_J2 2

//copiar uma matriz na outra

const int TAM_I1 = 3;
const int TAM_I2 = 3;


void printarMatriz(int matriz[TAM_I1][TAM_J1]);
void copiarMatriz(int matrizA[][TAM_J1], int matrizB[][TAM_J1]);

int main(){

    int matrizA[][TAM_J1] = {{2,3}, {5,6}, {7,8}};

    int matrizB[][TAM_J1] = {{9,10}, {11,12}, {13,14}};

    if(TAM_I1 == TAM_I2 && TAM_J1 == TAM_J2){

        printarMatriz(matrizA);
        printarMatriz(matrizB);

        copiarMatriz(matrizA, matrizB);

        printarMatriz(matrizB);

    }

    else
    {
        puts("As matrizes tem dimencoes incompativeis.");
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

void copiarMatriz(int matrizA[][TAM_J1], int matrizB[][TAM_J1]){

    for (int i = 0; i < TAM_I1; i++)
    {
        for (int j = 0; j < TAM_J1; j++)
        {
            matrizB[i][j] += matrizA[i][j];
        }
        
    }
    
}