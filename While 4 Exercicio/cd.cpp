#include <iostream>

#include <locale.h>

using namespace std;


int main(){

    int numero, numero1, total, media;

    cout<<"Digite um numero: \n";
    cin>>numero;

    total = 0;
    numero1 = 1;

    while(numero > 0){

    cout<<"Digite um outro numero: \n";
    cin>>numero;
    total = numero + total;
    numero1++;
    }

    media = total/numero1;
    cout<<"Voce digitou: "<<numero1<<" numeros e obteve: "<<media<<" De media destes numeros";



return 0;
}
