#include <iostream>

using namespace std;

int main(){

    int numeros[3][3];
    int soma, linha, coluna;

    cout<<"Insira 9 numeros: \n";

    for(linha = 0; linha < 3; linha++){

        for(coluna = 0; coluna < 3; coluna++){

        cout<<"\nNumero: "<<coluna<<" Coluna: "<<linha<<" : ";
        cin>>numeros[linha][coluna];

        }

    }


    for(linha = 0; linha < 3; linha++){

        for(coluna = 0; coluna < 3; coluna++){

        cout<<numeros[linha][coluna];

        }
    cout<<endl;
    }

    soma = numeros[0][0] + numeros[1][1] + numeros[3][3];
    cout<<endl<<soma;
    cout<<endl<<numeros[0][0];
    cout<<endl<<numeros[1][1];
    cout<<endl<<numeros[3][3];


return 0;
}
