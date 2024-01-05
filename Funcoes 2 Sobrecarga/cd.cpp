#include <iostream>

using namespace std;

void FUNCSOMA(int n1, int n2);
int FUNCSOMA(int n11, int n22, int n33);

int main(){

    FUNCSOMA(10, 2);

    int n11, n22, n33, soma;
    cout<<"Insira 3 numeros \n";
    cin>>n11;
    cin>>n22;
    cin>>n33;
    soma = FUNCSOMA(n11, n22, n33);
    cout<<"\nSOMA: "<<soma;


return 0;
}



void FUNCSOMA(int n1, int n2){

    cout<<"Total: "<<n1+n2<<"\n";

}

int FUNCSOMA(int n11, int n22, int n33){

    return n11+n22/n33;

}
