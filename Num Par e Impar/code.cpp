#include <iostream>

using namespace std;

int main(){

    int numero, par, impar, contador, algo;

    Comeco:


    numero = 0;

    cout<<"\n\nInsira 10 numeros";

    contador = 1;

    while(contador < 11){

    contador++;
    cout<<"\nInsira o numero "<<contador-1<<":\n";
    cin>>numero;

    if (numero % 2 == 0){

    par++;

    } else if (numero % 2 > 0){

    impar++;

    } else {

    cout<<"Erro de sintaxe";
    goto Comeco;

    }
    }


    cout<<"\nVoce digitou: "<<par<<" de numeros pares";
    cout<<"\nVoce digitou: "<<impar<<" de numeros impares";


    cout<<"\n\nDigite algo para recomecar\n\n";
    cin>>algo;
    goto Comeco;


return 0;
}
