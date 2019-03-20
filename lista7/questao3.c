#include <stdlib.h>
#include <stdio.h>

/*
3. O D.A. (Diretório Acadêmico) da Ciência da Computação realizou a eleição para sua nova Diretoria. Foram inscritas duas chapas. Construa um programa que leia os votos de cada aluno do Curso e anuncie a chapa vencedora. Para isto, para cada aluno, deverá ser apresentado um menu com as seguintes funcionalidades:
0 – Sair do Programa
1 – Chapa 1
2 – Chapa 2
3 – Voto em branco
4 – Voto nulo
Ao final, o programa deverá apresentar o número de votos de cada chapa e o número de votos brancos e o de nulos. Deverá ainda anunciar qual a chapa vencedora seguida do percentual de votos que ela obteve. Caso ocorra empate das chapas, exibir uma mensagem comunicando o fato.
Caso seja lido um valor fora do domínio da opção do menu, deverá ser exibida uma mensagem de alerta ao usuário e repetir a leitura.
*/
int main(){    
    
int total_chapa1 = 0, total_chapa2 = 0, total_nulos = 0, total_brancos = 0 ;
int valor_de_entrada;

do{
    // entrada de votos
    
printf("\nInsira a opcao correspondente ao que quer fazer.\n");
printf(" 0 - Sai do programa \n 1 - chapa 1 \n 2 - chapa 2 \n 3 - voto em branco \n 4 - voto nulo\n");
scanf("%d", & valor_de_entrada);
        
     while(valor_de_entrada > 4 || valor_de_entrada < 0){

        printf("\a\nentrada de dados incorreta, digite novamente.\n");
        printf("Insira a opcao correspondente ao que quer fazer.\n");
        printf("0 - Sai do programa \n 1 - chapa 1 \n 2 - chapa 2 \n 3 - voto em branco \n 4 - voto nulo\n");
        scanf("%d", & valor_de_entrada);
        }   
    
if (valor_de_entrada == 1)
    total_chapa1++;
else if (valor_de_entrada == 2)
    total_chapa2++;
else if (valor_de_entrada ==3)
    total_brancos++;
else if (valor_de_entrada==4)
    total_nulos++;

}
while (valor_de_entrada != 0);


printf("Programa encerrado. Serao exibidos os resultados:\n");
printf(" %d votos na chapa 1 \n %d votos na chapa 2 \n %d votos em branco \n %d votos nulos\n", total_chapa1, total_chapa2, total_brancos, total_nulos);


return 0;



}