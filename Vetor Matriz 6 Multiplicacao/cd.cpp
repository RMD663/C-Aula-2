#include <iostream>

using namespace std;

int main(){

    int matriz[3][3];
    int linha, coluna;

    cout<<"Insira nove numeros: \n";






    for (linha = 0; linha < 3; linha++){

            for (coluna = 0; coluna < 3; coluna++){

            cout<<"Numero : "<<linha+1<<"-"<<coluna+1<<" : ";
            cin>>matriz[linha][coluna];

            }

    cout<<"\n";
    }

    cout<<"Matriz original\n";

     for (linha = 0; linha < 3; linha++){

            for (coluna = 0; coluna < 3; coluna++){


            cout<<matriz[linha][coluna]<<" ";

            }

    cout<<"\n";
    }

    cout<<"matriz multiplicada: \n";

    matriz[0][0] = matriz[0][0] * 2;
    matriz[1][1] = matriz[1][1] * 2;
    matriz[2][2] = matriz[2][2] * 2;

    for (linha = 0; linha < 3; linha++){

            for (coluna = 0; coluna < 3; coluna++){


            cout<<matriz[linha][coluna]<<" ";

            }
            cout<<endl;
}


return 0;
}
