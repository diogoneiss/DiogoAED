#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


/***************************************************************
 * Assinatura da função: serBissexto()
 * Data da elaboração: 9/4/19
 * Autor: Diogo Neiss
 * Objetivo: Decidir, através de booleanos, se um dado nao é bissexto.
 * Dados de entrada (argumentos): ano
 * Dado de saída (valor gerado pela função): Booleano ;
 ****************************************************************
 */


int entrada();
bool serBissexto(int ano);


int main(){


int ano = entrada();

if(serBissexto(ano)){
  printf("\nO ano e bissexto!");
}
else
  printf("\nO ano nao e bissexto!");

	    return 0;
} 



int entrada(){

	int input;
	printf("Insira o ano para verificar se e bissexto: ");
	scanf("%d", & input);
    
  while(input < 0){

  printf("\n\aEntrada incorreta! Digite novamente.");
	printf("\nInsira o ano para verificar se e bissexto: ");
	scanf("%d", & input);
  }

    return input;
}


bool serBissexto(int ano){

  bool bissexto;
  
  if (( ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0 ){
     bissexto = true;
  }
  else
     bissexto = false;


  return bissexto;


}




