#include <iostream>

using namespace std;

int main(){

    int numero, contador, resultado;
    string algo;

    Comeco:

    cout<<"\nInsira um numero de 1 a 10\n";
    cin>>numero;
    contador = 1;

    cout<<"\nA tabuada de: "<<numero<<" E \n";

    if (numero < 1 || numero > 10){

    cout<<"\nErro numero invalido";
    goto Comeco;

    } else {

    while (contador < 11){

    contador++;
    resultado = numero * contador;
    cout<<"\n"<<contador<<" * "<<numero<<" = "<<resultado;

    }
    }

    cout<<"\n\nDigite algo para continuar: ";
    cin>>algo;

    goto Comeco;


return 0;
}
