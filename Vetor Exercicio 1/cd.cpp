#include <iostream>

using namespace std;

    int main(){

    int numeros[5];
    int numero, contador;

    cout<<"Digite 5 numeros: "<<endl;

    for(contador = 0; contador < 5; contador++){

    cout<<"Digite o "<<contador+1<<" numero: ";
    cin>>numeros[contador];

    }

    cout<<"A ordem dos numeros digitados inversamente foi: ";

      for(contador = 4; contador >= 0; contador--){

    cout<<numeros[contador]<<" ";


    }

    return 0;
}
