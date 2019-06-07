/*
3.	Acrescente à classe que descreve um triângulo um método que permita ao usuário digitar os três lados do triângulo.
Obs: o método não deverá acessar os atributos diretamente.
Acrescente à função principal a criação de um outro objeto do tipo Triângulo. 
	- Ler os três lados do triângulo.
	- Escrever na tela o perímetro do triângulo.
	- Escrever na tela, por extenso, o tipo do triângulo. Exibir uma mensagem explicativa caso os lados não atendam à condição de existência do triângulo.
*/

#include <string>
#include <iostream>

using namespace std;

class Triangulo {

private:

	int lado1;
	int lado2;
	int lado3;

public:

	void setLado1(int lado1){
		if (lado1 > 0)
			this->lado1 = lado1;
		else
			this->lado1 = 0;
	}

	void setLado2(int lado2) {
		if (lado2 > 0)
			this->lado2 = lado2;
		else
			this->lado2 = 0;
	}

	void setLado3(int lado3) {
		if (lado3 > 0)
			this->lado3 = lado3;
		else
			this->lado3 = 0;
	}

	int getLado1() {
		int lado = this->lado1;
		if (lado < 0) lado = 0;
		return lado;
	}

	int getLado2() {
		int lado = this->lado2;
		if (lado < 0) lado = 0;
		return lado;
	}

	int getLado3() {
		int lado = this->lado3;
		if (lado < 0) lado = 0;
		return lado;
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
	

};

void inserirLados(Triangulo objeto);
void printarResultados(Triangulo objeto);
void mostrarPerimetro(Triangulo objeto);
void inserirLados(Triangulo objeto);


int main(){

    Triangulo objeto1;

    objeto1.setLado1(3);
    objeto1.setLado2(4);
    objeto1.setLado3(5);

    cout << "Triangulo de teste: " << endl;

    mostrarPerimetro(objeto1);

    printarResultados(objeto1);

    cout << "Triangulo inserido pelo usuario: " << endl;

    Triangulo objetoUser;

    inserirLados(objetoUser);

    mostrarPerimetro(objetoUser);

    printarResultados(objetoUser);

    return 0;
}

void printarResultados(Triangulo objeto){

    cout << "Aqui vai o tipo de triangulo" << endl;

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

void inserirLados(Triangulo objeto){

    int lado1;
    int lado2;
    int lado3;

    cin.clear();

    cout << "Insira o lado1: ";

    cin >> lado1;
    cin.ignore();

    cout << "Lado inserido igual a:" << lado1 << endl;

    cout << "Insira o lado2: ";

    cin >> lado2;
    cout << "Lado inserido igual a:" << lado2 << endl;
    cin.ignore();

    cout << "Insira o lado3: ";

    cin >> lado3;
    cin.ignore();
    cout << "Lado inserido igual a:" << lado3 << endl;

    objeto.setLado1(lado1);
    objeto.setLado2(lado2);
    objeto.setLado3(lado3);

}
