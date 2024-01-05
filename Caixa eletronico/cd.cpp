#include <iostream>

#include <locale.h>

using namespace std;


int main(){

    int dinheiro, c2, c5, c10, c20, c50, c100, c200, Resto, VF;

    cout<<"Insira o valor do saque entre 2 e 2000: ";
    cin>>dinheiro;

    VF = dinheiro;


    if (dinheiro < 2 || dinheiro > 2000){

    cout<<"Valor invalido";

    } else {

    c200 = dinheiro / 200;
    dinheiro -= c200 * 200;
    c100 = dinheiro / 100;
    dinheiro -= c100 * 100;
    c50 = dinheiro / 50;
    dinheiro -= c50 * 50;
    c20 = dinheiro / 20;
    dinheiro -= c20 * 20;
    c10 = dinheiro / 10;
    dinheiro -= c10 * 10;
    c5 = dinheiro / 5;
    dinheiro -= c5 *5;
    c2 = dinheiro / 2;
    dinheiro -= c2 * 2;

    Resto = dinheiro;

    } if (Resto > 1) {

    cout<<"Valor invalido";

    } else {


    cout<<"\nCedulas de $200: "<<c200;
    cout<<"\nCedulas de $100: "<<c100;
    cout<<"\nCedulas de $50: "<<c50;
    cout<<"\nCedulas de $20: "<<c20;
    cout<<"\nCedulas de $10: "<<c10;
    cout<<"\nCedulas de $5: "<<c5;
    cout<<"\nCedulas de $2: "<<c2;

    cout<<"\nO valor de $"<<VF<<" foi retirado da conta\n";

    }


return 0;

}
