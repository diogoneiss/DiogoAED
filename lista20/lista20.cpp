#include <iostream>
#include <string>

using namespace std;

const int MAX = 10;

int TAM = 0;


class Agenda{

    private:

        string nome;
        int dia;
        int mes;

    public:

        void setDia(int dia){
            if(dia < 0 || dia >31)
                dia = 0;

            this->dia = dia;
        }

        void setMes(int mes){
            if(mes<0||mes>12)
                mes = 0;

            this->mes = mes;
        }


        void setNome(string nome){

            for (auto & c: nome) c = toupper(c);


            this->nome = nome;
        }

        void setALL(string nome, int dia, int mes){

            setNome(nome);
            setDia(dia);
            setMes(mes);

        }




        int getDia(){
            return this-> dia;
        }

        int getMes(){
            return this->mes;
        }

        string getNome(){
            return this->nome;
        }

};

void cadastrar(Agenda pessoa[]);
void opcoes();
void pesquisarAniversariantes(Agenda conjunto[]);
void acoesOpcoes(Agenda conjunto[]);
void modificarTam();

int main()
{
    Agenda nomes[MAX];

    acoesOpcoes(nomes);

    cout << "\nprograma encerrado.";




/*
    cout << "\nNome: = " <<nomes[0].getNome();
    cout << "\nDia: = " <<nomes[0].getDia();
    cout << "\nMes: = " <<nomes[0].getMes();
*/


    return 0;
}

void opcoes() {

        cout << "\n[0] Sair do programa\n";
        cout << "[1] Cadastrar uma pessoa\n";
        cout << "[2] Pesquisar por aniversariantes do mes\n";
        cout << "Digite a opcao desejada: "<< endl;

}

void acoesOpcoes(Agenda conjunto[]){

    bool sair = false;
    int opcao;

    do {

        opcoes();

        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                cadastrar(conjunto);
                break;

            case 2: pesquisarAniversariantes(conjunto);
                break;

            case 0:
                sair = true;
                break;

            default:
                cout << "\nEntrada incorreta, repetindo.\n";

        }

} while (!sair || TAM == MAX);

}


void cadastrar(Agenda pessoa[]){

    string nome;
    int dia;
    int mes;

    cout << "Insira o nome: ";
    fflush(stdin);

    scanf("%s", & nome);

    printf("\nInsira o dia do nascimento: ");

    scanf("%d", &dia);

    printf("\nInsira o mes do nascimento");

    scanf("%d", &mes);


    pessoa[TAM].setALL(nome, dia, mes);

    modificarTam();


}

void pesquisarAniversariantes(Agenda conjunto[]){

    int mes;


    do {
        printf("\nInsira o mes de busca: ");
        scanf("%d", &mes);

        if (mes < 0 || mes > 12)
            cout << "\nErro. Insira novamente";

    }while(mes < 0 || mes > 12);

    cout << "Os aniversariantes sao: \n ";

    for (int i = 0; i < TAM; ++i) {
        if (conjunto[i].getMes() == mes)
            cout << conjunto[i].getNome() << endl;


    }


}

void modificarTam(){
    TAM = TAM +1;
}
