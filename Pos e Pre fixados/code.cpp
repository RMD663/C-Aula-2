#include <iostream>

#include <locale.h>

using namespace std;


int main(){

    int num1;

    num1 = 10;


    cout<<"Valor inicial \n";
    cout<<"Numero: \n"<< num1;

    num1*=2;

    cout<<"\n Valor multiplicado \n";
    cout<<"Numero: \n"<< num1;

    num1/=4;

    cout<<"\n Valor dividido \n";
    cout<<"Numero: \n"<< num1;

    cout<<"\n---Pos fixado---\n";

    num1=100;

    cout<<"\n Numero = "<<num1++<<"\n";
    cout<<"\n Numero = "<<num1<<"\n";

    cout<<"\n---Pre fixado---\n";

    num1=100;

    cout<<"\n Numero = "<<++num1<<"\n";

return 0;

}
