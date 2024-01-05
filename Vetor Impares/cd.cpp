#include <iostream>

using namespace std;

    int main(){

    int numerosimpares[5], numerosdigitados;
    int pares, impares, contador;


    cout<<"Insira 5 numeros: ";

    for (contador = 0; contador < 5; contador++){
    cout<<"Digite o numero da "<<contador+1<<" posicao: ";
    cin>>numerosdigitados;

    if(numerosdigitados % 2 == 0){

    pares = numerosdigitados;

    } else {

    numerosimpares[contador] = numerosdigitados;

    }

    }
    cout<<endl;
    cout<<"Numeros impares digitados: ";
    for (contador = 0; contador < 5; contador++){

    cout<<numerosimpares[contador]<<" ";
    }



return 0;
}
