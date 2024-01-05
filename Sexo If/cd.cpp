#include <iostream>

#include <locale.h>

using namespace std;


int main(){

    string genero;


    cout<<"Insira seu genero: ";
    cin>>genero;

    if (genero == "F" || genero == "f"){

    cout<<"Genero Feminino";

    } else if (genero == "M" || genero == "m"){

    cout<<"Genero Masculino";

    } else {

    cout<<"Genero Invalido";

    }

return 0;

}
