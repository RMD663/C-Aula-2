#include <iostream>

using namespace std;

int FUNSOMA(int numero);

int main(){

int numero, soma, somatorio, resultado;

cout<<"Insira um numero: ";
cin>>numero;
soma = numero;
FUNSOMA(numero);

somatorio = FUNSOMA(numero);
cout<<"\n"<<somatorio;
return 0;
}



int FUNSOMA(int numero){

    int resultado;

    if(numero == 1){

    return 1;

    } else {

    resultado = numero + FUNSOMA(numero-1);

    }


}
