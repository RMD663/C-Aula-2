#include <iostream>

#include <locale.h>

using namespace std;

int main(){

    int numero1, numero2, numero3, soma;

    cout << "Digite o primeiro numero: \n";
    cin >> numero1;

    cout << "Digite o segundo numero: \n";
    cin >> numero2;

    cout << "Digite o terceiro numero: \n";
    cin >> numero3;

    soma = numero1 + numero2 + numero3;

    cout << "\n\nA o valor da soma e : " << soma << "\n";


    system("pause");
    return 0;

}
