#include <stdio.h> 

int countNegativeNumbers(int a[], int i, int contador);

void printarArray(int a[]);

const int SIZE = 5;


int main(){
 

int numeros[] = {1, -2, 3, -4, 5};

int contador = countNegativeNumbers(numeros, 0, 0);

printarArray(numeros);

printf("\nHa %d numeros negativos no array.", contador);
    
}


int countNegativeNumbers(int a[], int i, int contador){

    if(i < SIZE)
    {
        if(a[i] < 0) contador++;
        
        countNegativeNumbers(a, ++i, contador);

    }

    else
        return contador;

 }

void printarArray(int a[]){

for (int i = 0; i < SIZE; ++i)
{
    printf("%d ", a[i]);
}

}
