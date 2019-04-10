#include <stdlib.h>
#include <stdio.h>

#define pi 3.141592;


/***************************************************************
 * Assinatura da função: areaCirculo()
 * Data da elaboração: 9/4/19
 * Autor: Diogo Neiss
 * Objetivo: Calcular a área de um círculo.
 * Dados de entrada (argumentos): raio
 * Dado de saída (valor gerado pela função): area;
 ****************************************************************
 */


float areaCirculo(float raio);
float dominio();
float entrada();


int main(){

	float raio, resposta;

	raio = dominio();


	resposta = areaCirculo(raio);

	printf("\nO raio deste circulo e %.5f \n", resposta);


	    return 0;
} 

float areaCirculo(float r){

    float area = r * r * pi;


return area;

}

float entrada(){

	float input;
	printf("Insira o comprimento do raio: ");
	scanf("%f", & input);

    return input;
}


float dominio(){

	float verificarDominio;

	do{

		verificarDominio = entrada();

		if (verificarDominio <= 0)
		{
			printf("\a\nErro de dominio! tente novamente. \n");

		}

	}while(verificarDominio <= 0);

return verificarDominio;

}
