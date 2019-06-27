#include <math.h>
#include <string>

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

    //funcao sobrecarregada
    std::string printarValidade() {
        std::string retorno = "funcao meramente virtual, nao use";
        return retorno;
    }

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

    Circulo(double raio)
        : raio(raio)
    {
        quantidade++; 
    }

    void setRaio(double raio){
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

        //verificacao de existencia do triangulo
        else if (!((abs(lado1-lado2) < lado3)&&(lado3<(lado1+lado2))))
            ehValido = false;

        return ehValido;
    }

        std::string printarValidade(){

            std::string validadeTrig;

            if(this->valido())
                validadeTrig = "O triangulo eh valido";

            else
                validadeTrig = "O triangulo NAO eh valido";

            return validadeTrig;
    }

    static int getQuantidade(){
        return quantidade;
    }

};
