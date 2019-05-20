#include <stdio.h>


/*    

1. Construa uma função que troque o primeiro elemento do arranjo com o último.
Argumento: um arranjo de inteiros.
Teste o método criado a partir de main().
*/


void trocarValores(int array[]);
void printarConjunto(int array[]);
void encerrarPrograma();



const int tamanho = 6;



int main (){

    int conjunto[] = {1,2,3,4,5,6};


    printarConjunto(conjunto);

    printf("\nArranjo apos modificacao: ");

    trocarValores(conjunto);

    printarConjunto(conjunto);


    encerrarPrograma();

return 0;
}

void trocarValores(int array[]){

    int aux;

    aux = array[tamanho-1];

    array[tamanho-1] = array[0];
    array[0] = aux;

}

void printarConjunto(int array[]){

    printf("\n");

    for (int i = 0; i < tamanho; i++){
        printf("%d ", array[i]);}

}


void encerrarPrograma(){

printf("\nFim do programa. Aperte qualquer tecla para sair.");
getchar();


}

