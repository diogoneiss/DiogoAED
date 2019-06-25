#include <iostream>
#include <math.h>
//superclasse

class FigGeometrica {
    private:
    static int quantidade;

    public:

    FigGeometrica() {
        quantidade++;
    }

    // funcoes virtuais
    virtual double perimetro() = 0;
    virtual double area() = 0;

    static int getQuantidade() {
        return quantidade;
    }
    
};

class Circulo : public FigGeometrica {

private:

    double raio;
    static int quantidade;

public:

    Circulo(){
        quantidade++;
        
    }

    Circulo(double raio){
        quantidade++;
        
        setRaio(raio);
    }

    void setRaio(double raio){
        this->raio = raio;
    }

    double getRaio(){
        return this->raio;
    }

    double perimetro(){
        return (2*3.141592 * getRaio());
    }

    double area(){
        return (3.141592 *getRaio() *getRaio());
    }

    static int getQuantidade(){
        return quantidade;
    }

};

class Quadrado : public FigGeometrica{
private:
    double lado;
    static int quantidade;
    
public:
    Quadrado(){
        quantidade++;
        
    }

    Quadrado(double lado){
        quantidade++;
        
        setLado(lado);
    }

    void setLado(double lado){
        this->lado = lado;
    }

    double getLado(){
        return this->lado;
    }

    double perimetro(){
        return (getLado() *4);
    }

    double area(){
        return (getLado() *getLado());
    }

    static int getQuantidade(){
        return quantidade;
    }

};

class Triangulo : public FigGeometrica{

private:

    double a;
    double b;
    double c;

    static int quantidade;

public:

  Triangulo(){
        quantidade++;
        
    }

    Triangulo(double a, double b, double c){
        quantidade++;
       
        setTriangulo(a,b,c);
      
    }

    void setLadoA(double a){
        this->a = a;
    }
    void setLadoB(double b){
        this->b = b;
    }
    void setLadoC(double c){
        this->c = c;
    }

    void setTriangulo(double a, double b, double c){
        setLadoA(a);
        setLadoB(b);
        setLadoC(c);
    }

    double getLadoA(){
        return this->a;
    }
    double getLadoB(){
        return this->b;
    }
    double getLadoC(){
        return this->c;
    }

    double perimetro(){
        return (getLadoA() + getLadoB() + getLadoC());
    }

    double area(){

        double semiPerimetro = perimetro()/2;

        // formula de heron
        double area = sqrt(semiPerimetro * (semiPerimetro-getLadoA()) *(semiPerimetro-getLadoB()) * (semiPerimetro-getLadoC()));
        

        return area;
    }

    bool valido(){
        bool ehValido = true;

        double lado1 = getLadoA();
        double lado2 = getLadoB();
        double lado3 = getLadoC();

        if(lado1==0 || lado2==0|| lado3==0)
            ehValido = false;

        else if((abs(lado1-lado2) < lado3)&&(lado3<(lado1+lado2)))
            ehValido = false;

        return ehValido;
    }

    static int getQuantidade(){
        return quantidade;
    }


};


// prototipos
void submenuQuadrados();
void submenuTriangulos();
void submenuCirculos();

//fim prototipos

// setar as variaveis estáticas de quantidade
int FigGeometrica::quantidade = 0;
int Quadrado::quantidade = 0;
int Triangulo::quantidade = 0;
int Circulo::quantidade = 0;

int main(){

  int* ptrClasses;  

int opcao;

do{

    std::cout << "\nNo momento ha " << FigGeometrica::getQuantidade() << " figuras geometricas."<< std::endl;
    std::cout << "Insira o numero correspondente ao submenu que quer acessar" << std::endl;

    std::cout << "[0] sair do programa" << std::endl;
    std::cout << "[1] circulo" << std::endl;
    std::cout << "[2] quadrado" << std::endl;
    std::cout << "[3] triangulo" << std::endl;
    
    std::cin >> opcao;

    switch (opcao)
    {
    case 0:
        break;
        
    case 1: submenuCirculos();
        break;

    case 2: submenuQuadrados();
        break;

    case 3: submenuTriangulos();        
        break;
    
    default: std::cout << "Opcao invalida, repetindo" << std::endl;
        break;
    }

}while(opcao != 0);

std::cout << "Fim do programa." << std::endl;

}

void submenuCirculos(){
   
    int raio;

    Circulo *ptrCirculo;

    std::cout << "Insira 0 caso queira voltar ao menu " << std::endl;

    std::cout << "Insira o raio do Circulo a ser criado: ";
    std::cin >> raio;

    ptrCirculo = new Circulo(raio);

    std::cout << "Perimetro: " << ptrCirculo->perimetro() << std::endl;
    std::cout << "Area: " << ptrCirculo->area() << std::endl;
    std::cout << "Num de Circulos: " << ptrCirculo->getQuantidade() << std::endl;
    // destruir o ptr
    delete ptrCirculo;
}

void submenuTriangulos(){
   
    
    int ladoA;
    int ladoB;
    int ladoC;

    Triangulo *ptrTriangulo;

    

    std::cout << "Insira 0 caso queira voltar ao menu " << std::endl;

    std::cout << "Insira o lado A do triangulo a ser criado: ";
    std::cin >> ladoA;

    std::cout << "Insira o lado B do triangulo a ser criado: ";
    std::cin >> ladoB;

    std::cout << "Insira o lado C do triangulo a ser criado: ";
    std::cin >> ladoC;

    

    ptrTriangulo = new Triangulo(ladoA, ladoB, ladoC);

    std::cout << "Perimetro: " << ptrTriangulo->perimetro() << std::endl;
    std::cout << "Area: " << ptrTriangulo->area() << std::endl;
    std::cout << "Num de triangulos: " << ptrTriangulo->getQuantidade() << std::endl;
    
    // destruir o ptr
    delete ptrTriangulo;
}

void submenuQuadrados(){
       
    int lado;

    std::cout << "Insira 0 caso queira voltar ao menu " << std::endl;

    std::cout << "Insira o lado do quadrado a ser criado: ";
    std::cin >> lado;

    Quadrado *ptrQuadrado;
    ptrQuadrado = new Quadrado(lado);

    std::cout << "Perimetro: " << ptrQuadrado->perimetro() << std::endl;
    std::cout << "Area: " << ptrQuadrado->area() << std::endl;
    std::cout << "Num de quadrados: " << ptrQuadrado->getQuantidade() << std::endl;
    
    // destruir o ptr
    delete ptrQuadrado;
}