#include <stdlib.h>
#include <stdio.h>


/***************************************************************
 * Assinatura da função: perimetro()
 * Data da elaboração: 9/4/19
 * Autor: Diogo Neiss
 * Objetivo: Calcular o perímetro de um quadrado.
 * Dados de entrada (argumentos): lado
 * Dado de saída (valor gerado pela função): perimetro;
 ****************************************************************
 */


float perimetro(float lado);
float dominio();
float entrada();


int main(){

	float aresta, resposta;

	aresta = dominio();


	resposta = perimetro(aresta);

	printf("\nO perimetro deste quadrado e %.2f \n", resposta);


	    return 0;
} 

float perimetro(float lado){

    float perimetro = 4* lado;


return perimetro;

}

float entrada(){

    float input;
    printf("Insira o comprimento de um dos lados: ");
    scanf("%f", & input);

    return input;
}


float dominio(){

float verificarDominio;

do{

	if (verificarDominio <= 0)
	{
		printf("\a\nErro de dominio! tente novamente. \n");

	}

	verificarDominio = entrada();

	

}while(verificarDominio <= 0);

return verificarDominio;

}
