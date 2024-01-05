#include <iostream>

#include <locale.h>

using namespace std;


int main(){

    int numero;


    cout<<"Insira um numero entre 1 e 5: \n";
    cin>>numero;

    while(numero < 1 || numero > 5){


    cout<<"\nValor invalido\n";
    cout<<"Insira um numero entre 1 e 5: \n";
    cin>>numero;

    }

      cout<<"Voce digitou o numero: "<<numero<<" Que esta entre 1 e 5";




return 0;
}
