#include <stdlib.h>
#include <stdio.h>

int main(void) {
int n_alunos, entrada;
float percentual;
int c = 0;
int maior_idade = 0;
int menor_idade = 100;
int contador_maiores = 0;


printf("Insira quantos alunos tem a turma\n");
scanf("%d", & n_alunos);

do
{

// verificacao do dominio da entrada

printf("\nInsira a idade do proximo aluno a ser adicionado.\n");

scanf("%d", & entrada);

    if (entrada < 1 || entrada >100) {
        
        printf("\nEntrada de dados incorreta! Insira novamente. \n");
        
        while (entrada < 1 || entrada >100){

            printf("\nInsira a idade do proximo aluno a ser adicionado.");

            scanf("%d", & entrada);
            }
        }

// identificacao de maior e menores idades
if (entrada <= menor_idade)
    menor_idade = entrada;

if (entrada >= maior_idade)
    maior_idade = entrada;

if (entrada >= 18)
    contador_maiores++;

c++;

} while (c < n_alunos);


percentual = (float)contador_maiores / (float)n_alunos;

printf("\nA maior idade do conjunto e %d", maior_idade);
printf("\nA menor idade do conjunto e %d", menor_idade);

// excluir casos em que nao há maiores de idade (div por zero)

if (contador_maiores == 0)
    printf("\nA porcentagem de maiores de idade e 0%%");
else
    printf("\nA porcentagem de maiores de idade e %.1f%%\n", percentual*100);




return 0;
}