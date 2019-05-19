/*
     7. Construa um método que conte o número de elementos negativos em um arranjo de reais.
Teste o método criado a partir do método principal.

*/
#include <stdio.h>

const int SIZE = 6;


void printarArray(int array[]);
void lerArranjo(int Array[]);

int totalNegativos(int Array[]);

int main(){

int A[] = {6, -1, -4, -3, 2, 1};
printarArray(A);
int negativos = totalNegativos(A);

printf("\nO total de negativos eh %d", negativos);

return 0;

}

void printarArray(int array[]){

for(int i = 0; i < SIZE ; i++){

    printf("%d ", array[i]);

    }
}

void lerArranjo(int Array[]){

    for(int i = 0; i < SIZE; i++){
        printf("Insira o %do valor: ", i+1);
        scanf("%d", & Array[i]);
    }


}

int totalNegativos(int Array[]){

    int numNegativos = 0;

    for(int i =0; i < SIZE; i++){
        if(Array[i] < 0) numNegativos++;
     }

return numNegativos;

}




