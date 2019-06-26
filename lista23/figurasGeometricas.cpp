#include <iostream>
#include <math.h>
#include <string>
#include "classes.h"

//superclasse


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

int main(){

FigGeometrica *shapes[10];

int opcao;

do{

    std::cout << "\nNo momento ha " << FigGeometrica::getQuantidade() << " figuras geometricas."<< std::endl;
    std::cout << "Insira o numero correspondente ao submenu que quer acessar" << std::endl;

    std::cout << "[0] sair do programa" << std::endl;
    std::cout << "[1] circulo" << std::endl;
    std::cout << "[2] quadrado" << std::endl;
    std::cout << "[3] triangulo" << std::endl;
    std::cout << "Insira o numero correspondente ao submenu que quer acessar: ";

    std::cin >> opcao;

    switch (opcao)
    {
    case 0:
        break;
        
    case 1: submenuCirculos(shapes[FigGeometrica::getQuantidade()]);
        break;

    case 2: submenuQuadrados(shapes[FigGeometrica::getQuantidade()]);
        break;

    case 3: submenuTriangulos(shapes[FigGeometrica::getQuantidade()]);        
        break;
    
    default: std::cout << "Opcao invalida, repetindo" << std::endl;
        break;
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