#include <iostream>

using namespace std;

int main(){

    int numeros[5];
    int lista, contador, maior, igual, menor;

    cout<<"Insira 5 numeros: \n";

    for(lista = 0; lista < 5; lista++){

    cout<<lista<<" : ";
    cin>>numeros[lista];

    }

    for(lista = 1; lista < 5; lista++){

    if (numeros[lista] == numeros[0]  ){

    igual++;

    } else if (numeros[lista] > numeros[0] ){

    maior++;

    } else if ( numeros[lista] < numeros[0])

    menor++;

    }

    cout<<"\nO primeiro numero e: "<<numeros[0]<<endl;

    cout<<igual<<" numeros iguais ao primeiro\n";
    cout<<menor<<" numeros menores\n";
    cout<<maior<<" numeros maiores\n";

return 0;
}
