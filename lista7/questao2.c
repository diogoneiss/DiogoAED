#include <stdlib.h>
#include <stdio.h>

/* 
calcular e escrever os n primeiros termos da sequencia (100-3c)/(c+1)

1/100 + 97/2 + 3/94 + 91/4 + 5/88...

impares = 1/100 + 3/94 + 5/88
pares = 97/2 + 91/4 + 82/7

*/


int main() {
    
    int precisao =0;
    float resposta = 0;
    float c =0;
    int num_de_termos_duplicados;

    float parte_cima = 100.0;
    float parte_baixo = 1.0;
    float soma_impares, soma_pares;


    printf("Insira a precisao (numero de termos que voce quer incluir no calculo)\n");
    scanf("%i",& precisao);
    precisao -=2;

    num_de_termos_duplicados = precisao;
       
  
    for (precisao; precisao >= 0; precisao = precisao-2){
        
        soma_impares = (( 2.0*c + parte_baixo) / (parte_cima-c*6.0));
 
        soma_pares = ((parte_cima-3.0 -6.0*c)/(2.0*c + 1.0 + parte_baixo));        


        resposta = resposta + soma_impares + soma_pares;
        c++;
    }


    if (num_de_termos_duplicados % 2 != 0){
           
        soma_impares = (( 2.0*c + parte_baixo) / (parte_cima-c*6.0));
        resposta += soma_impares;

        }

    
    

    printf("a resposta e %f \n", resposta);

    return 0;



}