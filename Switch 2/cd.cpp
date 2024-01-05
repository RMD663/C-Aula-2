#include <iostream>

#include <locale.h>

using namespace std;


int main(){

    int andar;

    cout<<"Selecione um andar de 1 a 10 para saber o preco de compra: ";
    cin>>andar;

    switch(andar)
    {
    case 1:
    case 2:
    case 3:

    cout<<"O valor de compra e $200.000"; break;

    case 5:
    case 6:
    case 7:

    cout<<"O valor de compra e $450.000"; break;

    case 8:
    case 9:

    cout<<"O valor de compra e 780.000"; break;

    case 10:

    cout<<"O valor e de 1.000.000"; break;

    default:

    cout<<"Valor incorreto"; break;

    }

return 0;
}
