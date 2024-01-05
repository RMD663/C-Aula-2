#include <iostream>

#include <locale.h>

using namespace std;


int main(){

    int resto, numero, soma, vezes, impar;

    cout<<"Insira um numero: ";
    cin>>numero;
    vezes = 0;
    impar = 1;
    while(vezes <= numero){

    cout<<"\n"<<impar;
    impar = impar + 2;
    vezes++;

    }


return 0;
}
