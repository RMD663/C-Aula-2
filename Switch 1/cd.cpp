#include <iostream>

#include <locale.h>

using namespace std;


int main(){

    int numero;

    cout<<"Digite um numero para escolher uma refeicao: \n";
    cout<<"\n1.\n2.\n3.\n4.\n";
    cin>>numero;

    switch (numero)
    {
    case 1:

    cout<<"Bananas"; break;


    case 2:

    cout<<"Linguica"; break;

    case 3:

    cout<<"Carne"; break;

    default:

    cout<<"Sem almoco gratis"; break;

    }



return 0;
}
