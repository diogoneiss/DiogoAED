#include <stdio.h>
#include <string.h>

#define SIZE 20
/*
 * tinha q fazer uma agenda com 3 funções
[0] pra sair do programa
[1] pra cadastrar um aniversariante ( apenas um )
[2] listar os aniversariantes do mes
*/

struct agenda{

int mesAniversario;
char nomeCompleto[50];

};

struct agenda conjuntoAgenda[SIZE];

int escolherMes();
void adicionarAniversario(int contador);
void aniversariantesMes(int mes, int contador);

int main(){
int saidaPrograma = 0;
int opcao;
int mes;
int contador = 0;

    while(!saidaPrograma){

        printf("Insira a opcao desejada.\n[0] para sair,\n[1] para adicionar um aniversariante,\n[2] para listar aniversariantes.\n");
        scanf("%d", & opcao);

      
            
            if(opcao == 0){
                    saidaPrograma = 1;
            }

            else if(opcao == 1){ 
                    adicionarAniversario(contador);
                    contador++;
            }

            else if(opcao==2)
                aniversariantesMes(escolherMes(), contador);
                

            else
                puts("Opcao digitada incorretamente.");
        

    }

    puts("Fim do programa.");
    return 0;
}

void adicionarAniversario(int contador){
           
    char nome[50];

    puts("Insira o nome completo: ");
    scanf("%s",nome);
     
    strcpy(nome, conjuntoAgenda[contador].nomeCompleto);
   

    puts("Insira o mes de aniversario: ");
    scanf("%d", &conjuntoAgenda[contador].mesAniversario);

}

void aniversariantesMes(int mes, int contador){

for(int i = 0; i <= contador; i++)
{
    if(conjuntoAgenda[i].mesAniversario == mes)
        printf("\n%s", conjuntoAgenda[i].nomeCompleto);
}

puts("Esses foram os aniversariantes do mes");

}

int escolherMes(){
    int mes;
    puts("Insira o mes que quer listar os aniversariantes");
    scanf("%d", & mes);

    return mes;
}
