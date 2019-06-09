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
 *
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

        if (lado1 == 0 || lado2 == 0 || lado3 == 0) {
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




};

void inserirLados(Triangulo objeto);
void printarResultados(Triangulo objeto);
void mostrarPerimetro(Triangulo objeto);
bool compareTo(Triangulo objeto1, Triangulo objeto2);



int main(){

    cout << "Triangulo de teste: " << endl;

    Triangulo objetoInseridoPrograma;

    objetoInseridoPrograma.setLado1(3);
    objetoInseridoPrograma.setLado2(4);
    objetoInseridoPrograma.setLado3(5);



    mostrarPerimetro(objetoInseridoPrograma);

    printarResultados(objetoInseridoPrograma);


    cout << "\tTriangulos inserido pelo usuario: " << endl;



    Triangulo conjuntoObj[TAM];

    for (int i = 0; i < TAM; ++i) {
        cout << "Inserindo infos do triangulo " << i+1 << endl;

        conjuntoObj[i].inserirLados();

    }

    for (int j = 0; j < TAM; ++j) {
        cout << "Printando infos do triangulo " << j+1 << endl;
        printarResultados(conjuntoObj[j]);
        mostrarPerimetro(conjuntoObj[j]);

    }

    if(compareTo(conjuntoObj[1], conjuntoObj[2]))
        cout << "Sao iguais!";
    else
        cout << "NAO sao iguais!";

    return 0;
}

void printarResultados(Triangulo objeto){

    cout << "Tipo de triangulo: ";

    switch (objeto.descobrirTipo())
    {
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

bool compareTo(Triangulo objeto1, Triangulo objeto2){
    bool saoIguais = true;

    if(objeto1.getLado3() != objeto2.getLado1())
        saoIguais = false;

    else if(objeto1.getLado3() != objeto2.getLado1())
        saoIguais = false;

    else if(objeto1.getLado3() != objeto2.getLado3())
        saoIguais = false;

    return saoIguais;
}
