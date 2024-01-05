#include <iostream>

using namespace std;

int main(){

    int numero, contador, resultado, total;

    cout<<"Insira um numero para fatorar: \n";
    cin>>numero;
    resultado = 1;
    for(numero; numero >= 1; numero--){

    resultado *=numero;



    }

    cout<<resultado<<endl;

return 0;
}
