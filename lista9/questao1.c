#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    int maior_prod, maior_defeitos, num_maior_maquina;
    int entrada_producao, entrada_defeitos;
    
    
    do{
    print("\nInsira a producao da primeira maquina: ");
    scanf("%d", & entrada_producao);
    
    print("\nInsira quantos defeitos na primeira maquina: ");
    scanf("%d", & entrada_defeitos);
    }while (entrada_defeitos <1 || entrada_producao <1);
    
    
    maior_defeitos = entrada_defeitos;
    maior_prod = entrada_producao;
    
    for (int i = 1; i < 3; i++){
        
        do{
        print("\nInsira a producao da maquina: ");
        scanf("%d", & entrada_producao);
        }while(entrada_producao <0);
            
        if (entrada_producao > maior_prod){
            do{    
            print("\nInsira quantos defeitos na maquina: ");
            scanf("%d", & entrada_defeitos);
            while(entrada_defeitos <0);  
            
            maior_prod = entrada_producao;
            maior_defeitos = entrada_defeitos;
            
            num_maior_maquina = i+1;
            }
        
    }

    printf("A maior producao, de %d unidades, ocorreu na %da maquina, com um total de %d defeitos.", maior_prod, num_maior_maquina, maior_defeitos);
    return 0;
}
