#include <iostream>

#include <locale.h>

using namespace std;


int main(){

    double num1, num2, num3, num4;

    cout << "Insira o primeiro numero: ";
    cin >> num1;

    cout << "\nInsira o primeiro numero: ";
    cin >> num2;

    cout << "\nInsira o primeiro numero: ";
    cin >> num3;


    num4 = num1*2 + num2/2;

    cout <<"\n O primeiro resultado foi: "<< num4;

    num4 = num1*3 + num3;

    cout <<"\n O segundo resultado foi: "<< num4;

    num4 = num3*2;

    cout <<"\n O terceiro resultado foi: "<< num4;

return 0;
}
