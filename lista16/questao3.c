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
void inserirNoArray(int Array[]);



const int tamanho = 6;



int main (){

    int conjunto[] = {6, 5, 4, 3, 2, 1};

    int A[] = {6, 5, 4, 3, 2, 1};
	int B[] = {3, 1, 6, 4, 2, 5};
	int C[6];

    inserirNoArray(C);
  
    trocarFinal(A);
    trocarFinal(B);
    trocarFinal(C);

    printf("\nArranjo apos modificacao: ");

    printarConjunto(A);
    printarConjunto(B);
    printarConjunto(C);


    encerrarPrograma();

return 0;
}

void trocarFinal(int A[]){

    int antigoUltimo = A[tamanho -1 ];

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

A[tamanho-1] = maior;

A[indiceMaior] = antigoUltimo; 

}

void printarConjunto(int array[]){

    printf("\n");

    for (int i = 0; i < tamanho; i++){
        printf("%d ", array[i]);}

}
void inserirNoArray(int Array[]){

for (int i = 0; i < tamanho; i++)
{
    printf("\nInsira o numero para a %d posicao: ", i+1);
    scanf("%d", & Array[i]);
}



}


void encerrarPrograma(){

printf("\nFim do programa. Aperte qualquer tecla para sair.");
getchar();


}

