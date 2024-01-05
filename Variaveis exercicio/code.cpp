#include <iostream>

#include <locale.h>

using namespace std;

int main(){

    float metros, centimetros;

    cout << "Digite os metros para conversao: \n";
    cin >> metros;

    centimetros = metros * 100;

    cout << "O valor em centimetros e: " << centimetros << "\n";


system("pause");
return 0;

}
