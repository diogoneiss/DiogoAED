#include <iostream>


using namespace std;

class Agenda{

private:

    string nome;
    int dia;
    int mes;
    int ano;

public:

void setDia(int dia){
this->dia = dia;
}

void setMes(int mes){
this->mes = mes;
}

void setAno(int ano){
this->ano = ano;
}

void setNome(string nome){
this->nome = nome;
}

void setALL(int dia, int mes, int ano, string nome){

setNome(nome);
setDia(dia);
setMes(mes);
setAno(ano);

}




int getDia(){
return this-> dia;
}

int getMes(){
return this->mes;
}

int getAno(){
return this->ano;
}
string getNome(){return this->nome;}

};

int main()
{
    Agenda nomes[10];


    nomes[0].setALL(25,11,2000, "Diogo Oliveira Neiss");


    cout << "\nNome: = " <<nomes[0].getNome();
    cout << "\nDia: = " <<nomes[0].getDia();
    cout << "\nMes: = " <<nomes[0].getMes();
    cout << "\nAno: = " <<nomes[0].getAno();



    return 0;
}


