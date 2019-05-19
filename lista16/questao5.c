/*

    5. Construa um programa que calcule e escreva o número de alunos em uma turma com idade superior à idade média da turma.
A leitura das idades deverá se repetir até que uma idade igual a zero seja lida (flag).
Rejeitar a leitura de idades inválidas. Considere o domínio: 0..150
Um método deverá ficar encarregado de ler uma idade.
Um método deverá ficar encarregado de calcular a idade média da turma (este deve chamar a soma).
Um método deverá ficar encarregado de calcular o número de alunos com idade acima da média das idades da turma (este deve chamar o método que calcula a média).
Fique à vontade para projetar outros métodos auxiliares.


*/
#include <stdio.h>
#include <stdbool.h>

const int SIZE = 10;


void printarArray(int array[]);

void preencherArray(int Array[]);

int acimaMedia(int array[], int media);

int calcularMedia(int array[]);

int valorVerificado();

bool valorInvalido(int num);


int main(){

    int Notas[SIZE];

    preencherArray(Notas);

    int media;

    media = calcularMedia(Notas);

    int acima_da_media;

    acima_da_media = acimaMedia(Notas, media);

    printarArray(Notas);

    printf("\nMedia da turma: %d\n", media);
    printf("Alunos acima da media na turma: %d", acima_da_media);



    return 0;

}

int calcularMedia(int array[]){

    float media = 0;

    int contador = 0;

    int total = 0;

    int entrada;

    do{
        entrada = array[contador];

        total += entrada;

        if (entrada != 0)
            contador++;

    }while(contador < SIZE && entrada != 0);

    media = (float)total / (float)contador;



    return media;

}


void printarArray(int array[]){

    int i = 0;

    while(i < SIZE && array[i] != 0){

        printf("%d ", array[i]);
        i++;

    }
}


int acimaMedia(int array[], int media){

    int i = 0;
    int acima_da_media = 0;

    while(i < SIZE && array[i] != 0){

        if(array[i] > media) acima_da_media++;

        i++;

    }

    return acima_da_media;

}

void preencherArray(int Array[]){

    int i = 0;

    while(Array[i-1] != 0 && i < SIZE){

        Array[i] = valorVerificado();

        i++;

    }

}
int valorVerificado(){

    int valor;

    printf("Insira o valor: ");
    scanf("%d", &valor);

    while(valorInvalido(valor))
    {
        printf("\nValor invalido. Insira novamente: ");
        scanf("%d", &valor);

    }

    return valor;

}


bool valorInvalido(int num) {

    bool invalido = false;

    if(num < 0) invalido = true;

return invalido;

}

