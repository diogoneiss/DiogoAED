#include <iostream>
#include <math.h>
//superclasse

class FigGeometrica {
    private:
    static int Quantidade;

    public:

    FigGeometrica() {Quantidade++;}

    // funcoes virtuais
    virtual double perimetro() = 0;
    virtual double area() = 0;

    static int getQuantidade() {
        return Quantidade;
    }
};

class Circulo : public FigGeometrica {

private:

    double raio;
    static int quantidadeC;

public:

    Circulo(){
        quantidadeC++;
    }

    Circulo(double raio){
        quantidadeC++;
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

    static int getQuantidadeCirculos(){
        return quantidadeC;
    }

};

class Quadrado : public FigGeometrica{
private:
    double lado;
    static int quantidadeQ;
    
public:
    Quadrado(){
        quantidadeQ++;
    }

    Quadrado(double lado){
        quantidadeQ++;
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

    static int getQuantidadeQuadrado(){
        return quantidadeQ;
    }

};

class Triangulo : public FigGeometrica{

private:

    double a;
    double b;
    double c;

    static int quantidadeT;

public:

  Triangulo(){
        quantidadeT++;
    }

    Triangulo(double a, double b, double c){
        quantidadeT++;
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

    static int getQuantidadeTriangulo(){
        return quantidadeT;
    }


};

int main(){
    std::cout << "Teste" << std::endl;
}