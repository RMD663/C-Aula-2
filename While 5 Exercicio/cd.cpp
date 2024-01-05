#include <iostream>

#include <locale.h>

using namespace std;


int main(){

    int numero, A, B, C, D;

    cout<<"\nInsira um numero: ";
    cin>>numero;

    A = 0;
    B = 0;
    C = 0;
    D = 0;

    while(numero > 0){

    cout<<"\nInsira um outro numero: ";
    cin>>numero;

    if(numero > 0 || numero < 10){

    A++;

    } else if(numero > 11 || numero < 20){

    B++;

    } else if(numero > 21 || numero < 30){

    C++;

    } else if(numero > 31){

    D++;
    }
    }

    cout<<A<<" Numeros no intevalo de 0-10\n";
    cout<<B<<" Numeros no intevalo de 11-20\n";
    cout<<C<<" Numeros no intevalo de 21-30\n";
    cout<<D<<" Numeros no intevalo de 31-40\n";





return 0;
}
