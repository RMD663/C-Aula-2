#include <iostream>

#include <locale.h>

using namespace std;

    int media;

int main(){

    int entrada;
    string nome, sexo;

    cout<<"Digite seu nome: ";
    cin>>nome;

    cout<<"\nDigite seu sexo: ";
    cin>>sexo;

    entrada = 250;

    if (sexo == "Feminino") {

    entrada = (50*entrada)/100;
    cout<<"\nO valor da entrada para; "<<nome<<" E de: "<<entrada<<" Com 50% de desconto";

    }else if (sexo == "Masculino"){

     cout<<"\nO valor da entrada para; "<<nome<<" E de: "<<entrada;

    } else {

     cout<<"\nGenero invalido";

    }



return 0;
}
