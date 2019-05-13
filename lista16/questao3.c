#include <stdio.h>


/* 
    3. Considere a função main() abaixo:
int main() {

    int A[] = {6, 5, 4, 3, 2, 1};
	int B[] = {3, 1, 6, 4, 2, 5};
	int C[6];

	leArranjo(C);  // Preenche todo o arranjo com valores lidos

	deslocaMaiorParaFinal(A);   // Desloca o maior valor do arranjo para a última posição
	deslocaMaiorParaFinal(B);
	deslocaMaiorParaFinal(C);

	escreveArranjo(A);   // Escreve na tela todo o arranjo
	escreveArranjo(B);
	escreveArranjo(C);

	return 0;
} 
Implemente os métodos evocados na função principal acima. 
Obs: Busque alguma estratégia que não permita o maior valor sobrepor aquele inicialmente posicionado na última posição do arranjo. 


*/


void trocarFinal(int A[]);
void printarConjunto(int array[]);
void encerrarPrograma();



const int tamanho = 6;



int main (){

    int conjunto[] = {6, 5, 4, 3, 2, 1};

    printarConjunto(conjunto);

    
    printf("\nArranjo apos modificacao: ");

    trocarFinal(conjunto);

    printarConjunto(conjunto);


    encerrarPrograma();

return 0;
}

void trocarFinal(int A[]){

    int antigoUltimo = A[5];
    int maior = A[0];

    int indiceMaior = 0;

    


for (int i = 1; i < tamanho; i++)
{
    if (A[i] > maior)
   {
       maior = A[i];
       indiceMaior = i;
   }
}

A[5] = maior;

A[indiceMaior] = antigoUltimo; 

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

