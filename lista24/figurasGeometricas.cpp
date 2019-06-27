#include <iostream>
#include <string>
#include "classes.h"
#include <exception>
const int TAM = 10;

class Erros : public _exception {

private:

public:
    Erros(){

    }
    void dominioInvalido(int& num){
        std::cout << "O dominio esta invalido, insira um num no dominio" << std::endl;
        std::cout << "Num inserido: " << num << std::endl;
    }
    void arranjoForaDosBounds(){
        std::cout << "O array excedeu o tamanho maximo, que eh de " << TAM;
        std::cout << ". Saindo do programa" << std::endl;
        
    }


};

// prototipos
void submenuQuadrados(FigGeometrica *&ptrFig);
void submenuTriangulos(FigGeometrica *&ptrFig);
void submenuCirculos(FigGeometrica *&ptrFig);

//fim prototipos



// setar as variaveis estáticas de quantidade
int FigGeometrica::quantidade = 0;
int Quadrado::quantidade = 0;
int Triangulo::quantidade = 0;
int Circulo::quantidade = 0;

// tamanho do arranjo de objs



int main(){

FigGeometrica *shapes[TAM];

int opcao;

do{
    try{
        std::cout << "\nNo momento ha " << FigGeometrica::getQuantidade() << " figuras geometricas."<< std::endl;
        std::cout << "Insira o numero correspondente ao submenu que quer acessar" << std::endl;

        std::cout << "[0] sair do programa" << std::endl;
        std::cout << "[1] circulo" << std::endl;
        std::cout << "[2] quadrado" << std::endl;
        std::cout << "[3] triangulo" << std::endl;
        std::cout << "Insira o numero correspondente ao submenu que quer acessar: ";

        std::cin >> opcao;

        /* 
        if (FigGeometrica::getQuantidade() >= TAM){
            //sair do loop
            opcao = 0;

            throw("Arranjo fora dos limites");

        }
        */
        if(opcao == 0){
            //fazer nada
        }

        else if(opcao == 1)               
            submenuCirculos(shapes[FigGeometrica::getQuantidade()]);
                
        else if(opcao == 2)
            submenuQuadrados(shapes[FigGeometrica::getQuantidade()]);
                
        else if(opcao == 3)
            submenuTriangulos(shapes[FigGeometrica::getQuantidade()]);  

        else if(opcao >3 || opcao < 0)
            throw(opcao);  

        else  
            throw("erroDiverso");
                
        }

    // se o No estiver fora de dominio
    catch(int n){
        Erros num;
        num.dominioInvalido(n);
    }

    // array fora dos bounds
    catch(std::out_of_range objeto){
        Erros texto;
        texto.arranjoForaDosBounds();
    }

    // sem memoria
    catch (std::bad_alloc& excepObj){
    std::cout << "bad_alloc Exception  Out Of Memory " << excepObj.what() << std::endl;
    }

    //pegar o que sobrou
    catch(...){
        std::cout << " Um erro desconhecido aconteceu. "  << std::endl;
    }
    

}while(opcao != 0);

std::cout << "Foram criadas " << FigGeometrica::getQuantidade() << " figuras geometricas ao longo do programa."<< std::endl;
std::cout << "Fim do programa." << std::endl;

}

void submenuCirculos(FigGeometrica* &ptrFig){
   
    int raio;

    std::cout << "Insira 0 caso queira voltar ao menu " << std::endl;

    std::cout << "Insira o raio do Circulo a ser criado: ";
    std::cin >> raio;

    ptrFig = new Circulo(raio);

    std::cout << "Perimetro: " << ptrFig->perimetro() << std::endl;
    std::cout << "Area: " << ptrFig->area() << std::endl;
    std::cout << "Num de Circulos: " << ptrFig->getQuantidade() << std::endl;
   
}

void submenuTriangulos(FigGeometrica* &ptrFig){
   
    
    int ladoA;
    int ladoB;
    int ladoC;
   
    std::cout << "Insira 0 caso queira voltar ao menu " << std::endl;

    // atrobuição de lados

    std::cout << "Insira o lado A do triangulo a ser criado: ";
    std::cin >> ladoA;

    std::cout << "Insira o lado B do triangulo a ser criado: ";
    std::cin >> ladoB;

    std::cout << "Insira o lado C do triangulo a ser criado: ";
    std::cin >> ladoC;

    
    ptrFig = new Triangulo(ladoA, ladoB, ladoC);

    std::string validadeTriangulo = ptrFig->printarValidade();

    std::cout << "Perimetro: " << ptrFig->perimetro() << std::endl;
    std::cout << "Area: " << ptrFig->area() << std::endl;
    std::cout << "Validade: " << validadeTriangulo  << std::endl;
    std::cout << "Num de triangulos: " << ptrFig->getQuantidade() << std::endl;
    
   
}

void submenuQuadrados(FigGeometrica* &ptrFig){
       
    int lado;

    std::cout << "Insira 0 caso queira voltar ao menu " << std::endl;

    std::cout << "Insira o lado do quadrado a ser criado: ";
    std::cin >> lado;

    ptrFig = new Quadrado(lado);

    std::cout << "Perimetro: " << ptrFig->perimetro() << std::endl;
    std::cout << "Area: " << ptrFig->area() << std::endl;
    std::cout << "Num de quadrados: " << ptrFig->getQuantidade() << std::endl;
    
}