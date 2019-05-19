 /*   4. Construa uma nova versão do programa acima, substituindo o deslocamento do maior valor pela ordenação completa do arranjo em forma crescente.
int main() {
     	int A[] = {6, 5, 4, 3, 2, 1};
	int B[] = {3, 1, 6, 4, 2, 5};
	int C[6];
	leArranjo(C);  // Preenche todo o arranjo com valores lidos
	ordena(A);   // Desloca o maior valor do arranjo para a última posição, n vezes, até ordenar
	ordena (B);
	ordena (C);
	escreveArranjo(A);   // Escreve na tela todo o arranjo
	escreveArranjo(B);
	escreveArranjo(C);
  	return 0;
}


*/
#include <stdio.h>

const int SIZE = 6;


void printarArray(int array[]);
void ordenarArray(int array[]);
void lerArranjo(int Array[]);

int main(){
int A[] = {6, 5, 4, 3, 2, 1};
int B[] = {3, 1, 6, 4, 2, 5};
int C[SIZE];

lerArranjo(C);

ordenarArray(A);
ordenarArray(B);
ordenarArray(C);

puts("Array A: ");
printarArray(A);

puts("Array B: ");
printarArray(B);

puts("Array C: ");
printarArray(C);

return 0;

}

void ordenarArray(int array[]){

int aux;

    for(int i = 0; i < SIZE -1; i++){

        for(int y = i+1; y < SIZE ;y++){    
        
        if(array[i] > array[y]){
        
            // se [i] for maior que [y], troca eles

            aux = array[i];
            
            array[i] = array[y];

            array[y] = aux;

            }    
    
        }

    }


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




