#include <iostream>

using namespace std;

string FUNCNOME(string nome, string sobrenome);

int main(){

    string nome, sobrenome;


FUNCNOME(nome, sobrenome);


return 0;
}


string FUNCNOME(string nome, string sobrenome){

    cout<<"Insira seu nome: ";
    cin>>nome;
    cout<<"Insira seu sobrenome: ";
    cin>>sobrenome;
    cout<<"Seu nome e: "<<nome<<" "<<sobrenome;
}
