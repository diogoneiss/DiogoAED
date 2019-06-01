#include <stdio.h>
#include <string.h>

#define SIZE 20
/*
 * tinha q fazer uma agenda com 3 funções
[0] pra sair do programa
[1] pra cadastrar um aniversariante ( apenas um )
[2] listar os aniversariantes do mes
*/

typedef struct {

int diaAniversario;
int mesAniversario;
char nomeCompleto[50];

}agenda;



int escolherMes();
void adicionarAniversario(int contador, agenda conjuntoAgenda[]);
void aniversariantesMes(int mes, int contador, agenda conjuntoAgenda[]);

int main(){

    int saidaPrograma = 0;
    int opcao;
    int contador = 0;

    agenda conjuntoAgenda[SIZE];

        do{

                printf("Insira a opcao desejada.\n[0] para sair\t[1] para adicionar um aniversariante\t[2] para listar aniversariantes.\n");


                scanf("%d", & opcao);

                if(opcao == 0){
                        saidaPrograma = 1;
                }

                else if(opcao == 1){
                        adicionarAniversario(contador, conjuntoAgenda);
                        contador++;
                }

                else if(opcao==2)
                    aniversariantesMes(escolherMes(), contador, conjuntoAgenda);


                else
                    puts("Opcao digitada incorretamente.");



        }while(!saidaPrograma);

    puts("Fim do programa.");
    return 0;
}

void adicionarAniversario(int contador, agenda conjuntoAgenda[]){

    printf("Insira o nome completo: ");

    fflush(stdin);

    gets(conjuntoAgenda[contador].nomeCompleto);

    printf("\nInsira o dia do aniversario: ");

    scanf("%d", &conjuntoAgenda[contador].diaAniversario);

    printf("\nInsira o mes de aniversario: ");

    scanf("%d", &conjuntoAgenda[contador].mesAniversario);



}

void aniversariantesMes(int mes, int contador, agenda conjuntoAgenda[]){

for(int i = 0; i <= contador; i++)
{
    if(conjuntoAgenda[i].mesAniversario == mes)
        printf("\n%s, no dia %d", conjuntoAgenda[i].nomeCompleto, conjuntoAgenda[i].diaAniversario);
}

printf("\nEsses foram os aniversariantes do mes\n");

}

int escolherMes(){

    int mes;
    puts("Insira o mes que quer listar os aniversariantes");
    scanf("%d", & mes);

    return mes;
}
