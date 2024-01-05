#include <iostream>

using namespace std;

int main(){

    int numeros[2][2], numerosmulti1, numerosmulti2;
    int lista, linha, coluna, contador, multiplicado;


    cout<<"Insira os numeros para a operacao: \n";

    for (lista = 0; lista < 2; lista++){

        for(coluna = 0; coluna < 2; coluna++){

        cout<<"Insira o numero da posicao: "<<lista+1<<endl;
        cout<<"Na coluna: "<<coluna+1<<"\n";
        cin>>numeros[lista][coluna];

        }
    }
        numerosmulti1 = numeros[0][0] * numeros[1][0];
        numerosmulti2 = numeros[1][1] * numeros[1][1];

        cout<<numerosmulti1<<" ";
        cout<<numerosmulti2<<" ";





return 0;
}
