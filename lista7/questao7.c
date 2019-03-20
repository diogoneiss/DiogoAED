#include <stdlib.h>
#include <stdio.h>

// igual a questao anterior, so que o programa é cancelado quando a flag é lida.

int main(void) {
int  entrada;
float percentual;
int c = 0;
int maior_idade = 0;
int menor_idade = 100;
int contador_maiores = 0;
int flag = 0;



do
{

// verificacao do dominio da entrada

printf("\nDigite zero para parar e mostrar resultados, ou insira a idade do proximo aluno a ser adicionado.\n");

scanf("%d", & entrada);

    if (entrada < 0 || entrada >100) {
        
        printf("\nEntrada de dados incorreta! Insira novamente. \n");
        
        while (entrada < 0 || entrada >100){

            printf("\nInsira a idade do proximo aluno a ser adicionado.");

            scanf("%d", & entrada);
            }
        }

// identificacao de maior e menores idades
if (entrada <= menor_idade && entrada != flag)
    menor_idade = entrada;

if (entrada >= maior_idade)
    maior_idade = entrada;

if (entrada >= 18)
    contador_maiores++;

c++;

} while (entrada != flag);


percentual = (float)contador_maiores / (float)(c - 1);

printf("\nA maior idade do conjunto e %d", maior_idade);
printf("\nA menor idade do conjunto e %d", menor_idade);

// excluir casos em que nao há maiores de idade (div por zero)

if (contador_maiores == 0)
    printf("\nA porcentagem de maiores de idade e 0%%");
else
    printf("\nA porcentagem de maiores de idade e %.1f%%\n", percentual*100);




return 0;
}