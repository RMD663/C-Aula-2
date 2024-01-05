#include <iostream>

using namespace std;

int FUNCMENOR(int n1, int n2);

int main(){


    int n1, n2, menor;

    cout<<"Insira dois numeros: ";
    cin>>n1;
    cout<<"\n";
    cin>>n2;

FUNCMENOR(n1, n2);




return 0;
}

int FUNCMENOR(int n1, int n2){

    if(n1 > n2){

    cout<<n1<<" E maior que "<<n2;

    } else if (n2 > n1) {

    cout<<n1<<" E menor que "<<n2;

    } else if (n1 == n2 || n2 == n1){

    cout<<n1<<" E "<<n2<<" Sao iguais";

    } else {

    cout<<"Valor invalido";

    }


}

