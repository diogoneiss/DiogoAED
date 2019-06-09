/*
5.	Acrescente à classe que descreve um triângulo um método que permita verificar se dois triângulos são iguais ou não.
 O método deverá comparar o triângulo corrente com um triângulo recebido por parâmetro.
Em main(), permita ao usuário verificar se dois triângulos são iguais.
 O usuário deverá informar quais os triângulos a serem comparados - um valor inteiro entre 1 e 5.

*/



/*
 * Problemas:
 *
 *  -Não consigo usar #define, só const int global.
 *  -Pq inserirLados() tem que ser um metodo de classe e nao global
 */


#include <string>
#include <iostream>

using namespace std;

const int TAM = 3;

class Triangulo {

private:

    int lado1;
    int lado2;
    int lado3;

public:

    void setLado1(int entrada){
        if (entrada > 0)
            lado1 = entrada;
        else
            lado1 = 0;
    }

    void setLado2(int entrada) {
        if (entrada > 0)
            lado2 = entrada;
        else
            lado2 = 0;
    }

    void setLado3(int entrada) {
        if (entrada > 0)
            lado3 = entrada;
        else
            lado3 = 0;
    }

    int getLado1() {
        if (lado1<0)
            return 0;
        else
            return lado1;
    }

    int getLado2() {
        if (lado2<0)
            return 0;
        else
            return lado2;
    }

    int getLado3() {
        if (lado3<0)
            return 0;
        else
            return lado3;


    }

    int calcularPerimetro() {
        int perimetro = this->getLado1() + this->getLado2() + this->getLado3();

        return perimetro;
    }

    int descobrirTipo() {
        int lado1 = getLado1();
        int lado2 = getLado2();
        int lado3 = getLado3();

        int saida;

        if(!((abs(lado1-lado2)) < lado3 && lado3 < lado1 + lado2))
            saida = -1;

        else if (lado1 == 0 || lado2 == 0 || lado3 == 0) {
            saida = 0;
        }
        else if(lado1 == lado2 && lado2 == lado3){
            saida = 1;
        }
        else if(lado1 != lado2 && lado2 != lado3 && lado1 != lado3){
            saida = 3;
        }
        else
            saida = 2;

        return saida;
    }


    void inserirLados(){

        int lado1;
        int lado2;
        int lado3;

        cout << "Insira o lado1: ";
        cin >> lado1;

        cout << "Insira o lado2: ";
        cin >> lado2;

        cout << "Insira o lado3: ";
        cin >> lado3;

        setLado1(lado1);
        setLado2(lado2);
        setLado3(lado3);

    }

    bool compareTo(Triangulo objetoComparado){

        bool saoIguais = true;

        if(getLado1() != objetoComparado.getLado1())
            saoIguais = false;

        else if(getLado2() != objetoComparado.getLado2())
            saoIguais = false;

        else if(getLado3() != objetoComparado.getLado3())
            saoIguais = false;

        return saoIguais;

    }

};

//Protótipos de funcoes

void printarResultados(Triangulo objeto);
void mostrarPerimetro(Triangulo objeto);
void mostrarResultadosConjunto(Triangulo conjuntoObj[]);
void inserirConjunto(Triangulo conjuntoObj[]);
void compararTriangulos(Triangulo conjuntoObj[]);


int main(){

    // Questao 2 e 3

    cout << "Triangulo de teste: " << endl;

    Triangulo objeto1;

    objeto1.setLado1(3);
    objeto1.setLado2(4);
    objeto1.setLado3(5);



    mostrarPerimetro(objeto1);

    printarResultados(objeto1);

    // Questao 3

    cout << "\tTriangulo inserido pelo usuario: " << endl;

    Triangulo objeto2;

    objeto2.inserirLados();

    mostrarPerimetro(objeto2);
    printarResultados(objeto2);


    //Questao 4

    cout << "Triangulos em arranjo inseridos pelo usuario: " << endl;


    Triangulo conjuntoObj[TAM];

    inserirConjunto(conjuntoObj);
    mostrarResultadosConjunto(conjuntoObj);


    //Questao5

    compararTriangulos(conjuntoObj);


    return 0;
}

void printarResultados(Triangulo objeto){

    cout << "Tipo de triangulo: ";

    switch (objeto.descobrirTipo())
    {
        case -1:
            cout << "O triangulo eh invalido, pois nao atende as condicoes de existencia." << endl;
            break;
                case 0:
            cout << "O triangulo eh invalido, algum dos lados eh igual a zero." << endl;
            break;
        case 1:
            cout << "O triangulo eh EQUILATERO" << endl;
            break;
        case 2:
            cout << "O triangulo eh ISOSCELES" << endl;
            break;
        case 3:
            cout << "O triangulo eh ESCALENO" << endl;
            break;

        default: cout << "Erro!";
            break;
    }

}

void mostrarPerimetro(Triangulo objeto){

    cout << "O perimetro do triangulo eh " << objeto.calcularPerimetro() << endl;

}

void inserirConjunto(Triangulo conjuntoObj[]){

    for (int i = 0; i < TAM; ++i) {
        cout << "\nInserindo infos do triangulo " << i+1 << endl;

        conjuntoObj[i].inserirLados();

    }
}

void mostrarResultadosConjunto(Triangulo conjuntoObj[]){

    for (int j = 0; j < TAM; ++j) {
        cout << "\nPrintando infos do triangulo " << j+1 << endl;
        printarResultados(conjuntoObj[j]);
        mostrarPerimetro(conjuntoObj[j]);

    }

}

void compararTriangulos(Triangulo conjuntoObj[]){

    int chave;
    int comparado;

    cout << "Insira o indice do primeiro triangulo que quer comparar: ";
    cin >> comparado;

    cout << "Insira o indice do segundo triangulo, que sera comparado com o anterior: " << endl;
    cin >> chave;

    if(conjuntoObj[comparado].compareTo(conjuntoObj[chave]))
        cout << "Eles sao iguais";
    else
        cout << "Eles NAO sao iguais";

}


