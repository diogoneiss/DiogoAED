#include <stdio.h>

int SIZE_I = 2;
const int SIZE_J = 3;

/*
5.	Construa um método que calcule e retorne o número de ocorrências em uma matriz de reais maior que o seu valor médio. 
A média deverá ser calculada em um método específico para essa funcionalidade.
*/

void printarMatriz(float matriz[][SIZE_J]);

void lerMatriz(float matriz[][SIZE_J]);

float calcularMedia(float matriz[][SIZE_J]);

int acimaMedia(float matriz[][SIZE_J], float maior);



int main(){

    float matriz[SIZE_I][SIZE_J];
    int linha;

    lerMatriz(matriz);
    printarMatriz(matriz);

    printf("Ha %d elementos acima da media", acimaMedia(matriz, calcularMedia(matriz)));

    return 0;

}

float calcularMedia(float matriz[][SIZE_J]){

    int total = 0;

    for (int i = 0; i < SIZE_I; i++)
    {
        for (int c = 0; c < SIZE_J; c++)
        {
        total += matriz[i][c];

        }
        
    }

    float media = (float) total / ((float) SIZE_I * SIZE_J);

    return media;




    }

    void printarMatriz(float matriz[][SIZE_J]){
    puts("\nMatriz inserida: \n");

    for (int i = 0; i < SIZE_I; i++)
    {
        for (int c = 0; c < SIZE_J; c++)
        {
            printf("%f ", matriz[i][c]);
        }
        puts("\n");
    }

}

void lerMatriz(float matriz[][SIZE_J]){

    for (int i = 0; i < SIZE_I; i++)
    {
        for (int c = 0; c < SIZE_J; c++)
        {
            printf("Insira o elemento [%d][%d] ", i, c);
            scanf("%f", &matriz[i][c]);
        }
        
    }

    puts("\nMatriz lida.");

}

int acimaMedia(float matriz[][SIZE_J], float maior){
   
   int contador = 0;

   for (int i = 0; i < SIZE_I; i++)
    {
        for (int c = 0; c < SIZE_J; c++)
        {
            if(matriz[i][c] > maior) contador++;
        }
        
    }

return contador;

}