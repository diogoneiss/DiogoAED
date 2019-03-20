#include <stdlib.h>
#include <stdio.h>

/* 
1. Calcular e escrever o valor de H, sendo H igual a 1/(100-3*x)
*/

int main() {
    
    int precisao =0;
    float resposta = 0;
    int c =0;
    printf("Insira a precisao (numero de termos que voce quer incluir no calculo)\n");
    scanf("%d",& precisao);

    for (precisao; precisao > 0; precisao--){
        resposta = resposta + 1.0/(100.0-3.0*c);
        c++;
    }



    printf("a resposta e %.3f, com 3 casas decimais de precisao.\n", resposta);

    return 0;



}