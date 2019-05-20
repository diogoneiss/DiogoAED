#include <stdio.h>
#include <stdbool.h>

#define SIZE_J 3

int SIZE_I = 2;

/*
3.	Construa um método que receba uma matriz de reais e calcule e retorne o número da primeira linha da matriz em que está localizado o maior valor nela presente. 
*/

void printarMatriz(float matriz[][SIZE_J]);

float acharMaior(float matriz[][SIZE_J]);

void lerMatriz(float matriz[][SIZE_J]);

float calcularMedia(float matriz[][SIZE_J]);

float linhaMaiorEsta(float matriz[][SIZE_J], int maior);

int main(){

    
   

    float matriz[][SIZE_J] = {{3,50}, {5,6}, {7,8}};

    printarMatriz(matriz);
    float maior = acharMaior(matriz);

    int linha = linhaMaiorEsta(matriz, maior);


    printf("\nO maior valor eh %f e sua primeira ocorrencia e na linha %d \n", maior, linha);

    return 0;

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

float linhaMaiorEsta(float matriz[][SIZE_J], int maior){

    bool maiorAchado = false;
    int linha;

    int i = 0;
    int j = 0;

    while(!maiorAchado && i < SIZE_I){
    
    while(!maiorAchado && j < SIZE_J){
        if(matriz[i][j] = maior){
            maiorAchado = true;
                linha = i;
            }

        j++;
    }
    i++; 
    }

return linha;

}

int inserirLinha(){

    int linha;

    printf("\nInsira a linha que voce quer achar o maior valor: ");
        
    scanf("%d", &linha);

return linha;

}

float acharMaior(float matriz[][SIZE_J]){

float maior = matriz[0][0];

for (int i = 0; i < SIZE_J; i++)
{
    for (int j = 0; j < SIZE_J; j++)
    {
        if (matriz[i][j] > maior)
        {
            maior= matriz[i][j];
        }
        
    }
    
}
return maior;
   
}