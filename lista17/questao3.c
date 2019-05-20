#include <stdio.h>
#include <stdbool.h>

#define TAM_J1 2
#define TAM_J2 2

// 3.	Construa um método que receba uma matriz de reais e um valor real qualquer, chave de pesquisa. 
// O método deverá retornar o número de ocorrências da chave na matriz.

const int TAM_I1 = 3;
const int TAM_I2 = 3;


void printarMatriz(float matriz[TAM_I1][TAM_J1]);
float lerChave();
int ocorrenciasChave(float matriz[TAM_I1][TAM_J1], float chave);


int main(){

    float matriz[][TAM_J1] = {{3,3}, {5,6}, {7,8}};
    int vezes_aparece = ocorrenciasChave(matriz, lerChave());
    printf("A chave lida aparece %d vezes. ", vezes_aparece);
    
    
return 0;

}

void printarMatriz(float matriz[TAM_I1][TAM_J1]){

    for (int i = 0; i < TAM_I1; i++)
    {
        for (int j = 0; j < TAM_J1; j++)
        {
            printf("%f\t", matriz[i][j]);
        }

        printf("\n");
        
    }

    printf("\n\n");
}

float lerChave(){
    float chave;

    puts("Insira o valor que quer pesquisar na matriz: ");
    scanf("%f", &chave);

return chave;

}
int ocorrenciasChave(float matriz[TAM_I1][TAM_J1], float chave){

    int cont = 0;

    for (int i = 0; i < TAM_I1; i++)
    {
        for (int j = 0; j < TAM_J1; j++)
        {
            if(matriz[i][j] == chave) cont++;
        }
    }

return cont;

}