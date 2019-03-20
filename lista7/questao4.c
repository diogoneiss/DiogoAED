#include <stdlib.h>
#include <stdio.h>

/*
4. Escrever os n primeiros termos de fibonacci.
*/
int main(){    

int c, enesimo_valor;
int valor_a, valor_b, valor_temp;

valor_a = 1;
valor_b = 1;



printf("Insira quantos termos voce quer que a sequencia printada tenha.\n");
scanf("%d", & enesimo_valor);
c = enesimo_valor;
printf("\n%d\n%d\n", valor_a, valor_b);

for (c; c>0;c--){



    valor_temp = valor_a + valor_b;
    valor_a = valor_b;
    valor_b = valor_temp;
    
 //   printf("%d\n", valor_b);
    printf("%d\n", valor_temp);
}




return 0;



}