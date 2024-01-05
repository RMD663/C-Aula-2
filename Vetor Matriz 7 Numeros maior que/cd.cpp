#include <iostream>

using namespace std;

int main(){

    int matriz[3][3], linha, coluna, maior, vezes, maiorque;

    cout<<"Insira 6 numeros: ";

    for(linha = 0; linha < 3; linha++){

        for(coluna = 0; coluna < 3; coluna++){

        cout<<"\n"<<linha+1<<"-"<<coluna+1<<" : ";
        cin>>matriz[linha][coluna];

        }
    cout<<endl;
    }

    maior = 5;

    for(linha = 0; linha < 3; linha++){

        for(coluna = 0; coluna < 3; coluna++){

        if(matriz[linha][coluna] > maior){

        maiorque++;

        }
    }
}
    cout<<maiorque<<" numeros maiores que 5";


return 0;
}
