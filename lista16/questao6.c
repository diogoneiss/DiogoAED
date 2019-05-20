/*
 
    Questao 6: preencher um arranjo com fibonacci através de loop
    N usar recursividade
     

*/

#include <stdio.h>



int fibonacci(int num);
void printarArray(int array[]);
void preencherFib(int array[]);
void lerArray(int array[]);

const int SIZE = 5;


int main(){

int array[SIZE];

lerArray(array);

preencherFib(array);

printarArray(array);


return 0;

}


void printarArray(int array[]){

    for(int i = 0; i < SIZE; i++){

    printf("%d ", array[i]);

    }
}

int fibonacci(int num){

    int anterior_do_anterior= 0;
    int anterior= 1;

    int resposta = 1;

        for(int i = 0; i <= num; i++){

            resposta = anterior_do_anterior + anterior;
            
            anterior_do_anterior = anterior;
            
            anterior = resposta; 

            }

    return resposta;
}

void preencherFib(int array[]){

    for(int c = 0; c<SIZE; c++){

    array[c] = fibonacci(array[c]);

    }
}

void lerArray(int array[]){

    for(int i = 0; i < SIZE; i++){

    printf("\nInsira o %do valor: ", i+1);
    scanf("%d", & array[i]);
    }

}
