#include <iostream>

#include <locale.h>

using namespace std;


int main(){

    float nota, media, soma;
    int vezes, numero, I;

    for(numero = 1; numero < 11; numero++){

    cout<<"Numero: "<<numero<<"\n";


    }

    string nome;
    cout<<"Digite o nome do aluno: "<<endl;
    cin>>nome;
    soma = 0;
    for(I = 1; I < 5; I++){

    cout<<"Insira a nota "<<I<<": ";
    cin>>nota;

    soma = nota + soma;
    }

    media = soma/4;

    cout<<"Media: "<<media<<" Do aluno(a): "<<nome;




return 0;
}
