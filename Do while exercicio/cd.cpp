#include <iostream>

#include <locale.h>

using namespace std;


int main(){

    int numero;

    cout<<"Insira um numero:\n";
    cin>>numero;
    numero = numero*numero;
    cout<<"O quadrado do seu numero e: "<<numero<<"\n";



    while(numero > 0){

    cout<<"Insira um numero:\n";
    cin>>numero;
    numero = numero*numero;
    cout<<"O quadrado do seu numero e: "<<numero<<"\n";

    }

    cout<<"Digitou zero fim do codigo\n";


return 0;
}
