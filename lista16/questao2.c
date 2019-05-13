#include <stdio.h>


/*  2. Construa uma função que troque dois elementos quaisquer de um arranjo de reais.
Argumentos: Um arranjo de reais e dois valores inteiros relativos às duas posições a serem trocadas.
Teste o método criado a partir de main().
*/


void trocarValores(int array[], int i, int j);
void printarConjunto(int array[]);
void encerrarPrograma();



const int tamanho = 6;



int main (){

    int conjunto[] = {1,2,3,4,5,6};

    int pos1, pos2;

    printarConjunto(conjunto);

    printf("\nInsira as posicoes que voce quer trocar.\nLembre que a primeira posicao e [0]\nPos1 = ");
    scanf("%d", &pos1);

    printf("Pos2: ");
    scanf("%d", &pos2);

    printf("\nArranjo apos modificacao: ");

    trocarValores(conjunto, pos1, pos2);

    printarConjunto(conjunto);


    encerrarPrograma();

return 0;
}

void trocarValores(int array[], int i, int j){

    int aux;

    aux = array[j];

    array[j] = array[i];
    array[i] = aux;

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

