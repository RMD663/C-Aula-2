#include <iostream>

#include <locale.h>

using namespace std;

    int media;

int main(){

    int desconto, preco;
    string sexo, sexof, nome;

    preco = 250;

    cout << "Digite o seu nome: ";
    cin >> nome;

    cout << "\nDigite o seu sexo: ";
    cin >> sexo;

    if (sexo == "Masculino"){

    cout<<"\nO valor do ingresso para: "<<nome<<"E de"<<preco;


    } else if (sexo == "Feminino"){

    preco = (50*preco)/100;

    cout<<"\nO valor do ingresso para: "<<nome<<" E de "<<preco<<" Com 50% de desconto";

    }




}
