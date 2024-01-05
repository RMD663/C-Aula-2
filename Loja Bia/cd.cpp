#include <iostream>

#include <locale.h>

using namespace std;


int main(){

    float preco, dinheiro;
    string codigo;

    cout<<"Insira o valor total dos produtos: ";
    cin>>dinheiro;

    cout<<"\nInsira se o cliente e funcionario, vip ou etc...\nCL(Cliente Normal)\nCVIP(Cliente VIP 5%)\nEM(Funcionario 10%)\n";
    cin>>codigo;

    //codigos, CL, CVIP, EM.

    if (codigo == "EM"){

    preco = (90*dinheiro)/100;
    cout<<"\nO valor total e de $"<<preco<<" Com um desconto de 10%";

    } else if (codigo == "CL"){

     preco = (100*dinheiro)/100;
    cout<<"\nO valor total e de $"<<preco;

    } else if (codigo == "CVIP"){

     preco = (95*dinheiro)/100;
    cout<<"\nO valor total e de $"<<preco<<" Com um desconto de 5%";

    } else {

     preco = (100*dinheiro)/100;
    cout<<"\nO valor total e de $"<<preco;

    }



return 0;
}
