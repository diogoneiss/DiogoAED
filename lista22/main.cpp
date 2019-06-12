#include <string>
#include <iostream>

/*
 * 4.	No programa, o método principal deverá criar um arranjo de ponteiros para triângulos de tamanho igual a cem. Lembre-se que, a princípio, trata-se de um arranjo de referências para triângulos. Eles deverão ser efetivamente criados a partir da manifestação do usuário do programa.

O programa deverá conter um menu principal para prover as funcionalidades abaixo. Criar todos os métodos que se fizerem necessários para implementar tais funcionalidades.

0 – Sair do programa (exibir mensagem de agradecimento e encerrar o programa)
1 – Criar um triângulo (acrescentar um triângulo no arranjo e ler os valores para os seus lados)
2 – Listar triângulos (escrever todos os triângulos informando os lados e o perímetro de cada triângulo)
3 – Triângulos iguais (escrever o número de triângulos iguais presentes no arranjo)
4 – Listar os triângulos de um determinado tipo (apenas equiláteros, ou apenas isósceles, ou apenas escaleno)
5 – Verificar inconsistências (valores inválidos)

Observações acerca do menu:

- Opção 1: Ao selecionar a opção para criar um triângulo, essa ação deverá ser impedida caso o arranjo esteja cheio.

- Opção 2: Note que a opção Listar triângulos envolve não o arranjo inteiro, mas apenas o número de triângulos efetivamente criados.

- Opção 3: Note que ao calcular o número de triângulos iguais no arranjo, deve ser observado o método criado na lista anterior.

- Opção 4: antes de iniciar a listagem, deve ser apresentado um submenu ao usuário permitindo-o informar qual o tipo de triângulo que deve ser objeto da pesquisa.

- Opção 5: Listar os objetos cujos valores não atendam às regras de existência de um triângulo.


 */


using namespace std;

const int TAM = 3;

class Triangulo {

private:

    int lado1;
    int lado2;
    int lado3;

    static int contadorTriangulos;

public:

    //metodos construtores

    Triangulo(){
        this->lado1 = 0;
        this->lado2 = 0;
        this->lado3 = 0;

        this->contadorTriangulos++;

    }

    Triangulo(int n){
        if(n<0)
            n = 0;

        this->setLado1(n);
        this->setLado2(n);
        this->setLado3(n);

        this->contadorTriangulos++;
    }

    Triangulo(int lado1, int lado2, int lado3){

        this->setLado1(lado1);
        this->setLado2(lado2);
        this->setLado3(lado3);

        this->contadorTriangulos++;
    }

    // fim construtores

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
        if (this->lado3<0)
            return 0;
        else
            return this->lado3;
    }
    static int getContadorTriangulos(){
        return contadorTriangulos;
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

        if(!(this->trianguloValido()))
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

    bool trianguloValido(){

        bool valido = true;

        int lado1 = getLado1();
        int lado2 = getLado2();
        int lado3 = getLado3();

        if(!((abs(lado1-lado2)) < lado3 && lado3 < lado1 + lado2))
            valido = false;

        return valido;

    }


    void inserirLadosConstrutor(){

        int lado1;
        int lado2;
        int lado3;

        cout << "Insira o lado1: ";
        cin >> lado1;

        cout << "Insira o lado2: ";
        cin >> lado2;

        cout << "Insira o lado3: ";
        cin >> lado3;

        /*
        setLado1(lado1);
        setLado2(lado2);
        setLado3(lado3);
        */
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
void menu();

// fim protótipos

int Triangulo::contadorTriangulos = 0;


int main(){



    //cout << "\nNo de objetos: " << Triangulo::getContadorTriangulos();

    return 0;
}

void menu(){

    int opcao;

    do {
        cout << "\nMenu: ";
        cout << "\n0 – Sair do programa (exibir mensagem de agradecimento e encerrar o programa)";
        cout << "\n1 – Criar um triangulo (acrescentar um triangulo no arranjo e ler os valores para os seus lados)";
        cout << "\n2 – Listar triangulos (escrever todos os triangulos informando os lados e o perímetro de cada triângulo)";
        cout << "\n3 – Triangulos iguais (escrever o número de triangulos iguais presentes no arranjo)";
        cout << "\n4 – Listar os triangulos de um determinado tipo (apenas equilateros, ou apenas isosceles, ou apenas escaleno)";
        cout << "\n5 – Verificar inconsistências (valores inválidos)";

        cout << "\nInsira a opcao desejada: ";
        cin >> opcao;

        switch (opcao){
            case 0: cout << "\nObrigado por usar o programa!";
                break;
            case 1: // criar triangulo
                break;
            case 2: // listar todos os triangulos
                break;
            case 3: // verificar triangulos iguais
                break;
            case 4: // listar triangulo (submenu)
                break;
            case 5: // verificar triangulos invalidos
                break;

            default:
                cout << "Opcao nao existente! Insira novamente.";
                break;



        }


    }while(opcao != 0);
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

    cout << "Insira o primeiro triangulo que quer comparar: ";
    cin >> comparado;

    cout << "Insira o segundo triangulo, que sera comparado com o anterior: " << endl;
    cin >> chave;

    if(conjuntoObj[comparado].compareTo(conjuntoObj[chave]))
        cout << "Eles sao iguais";

    else
        cout << "Eles NAO sao iguais";

}

void adicionarTriangulo(){

}