#include <iostream>

using namespace std;

    int main(){

    string gavetas[4];
    int contador;

    gavetas[0] = "Blusa";
    gavetas[1] = "Camisa";
    gavetas[2] = "Calca";
    gavetas[3] = "Meia";

    for(contador = 0; contador < 4; contador++){

    cout<<"Posicao "<<contador<<": "<<gavetas[contador]<<endl;

    }

    int tamanho = 10;
    int posicao, contador2;
    string alfabeto[tamanho] = {"A", "B", "C", "D", "E", "F", "G"};

    for(posicao = 0, contador2 = 1; posicao < tamanho; posicao++, contador2++){

    cout<<"Letra "<<contador2<<": "<<alfabeto[posicao]<<"\n";

    }


    return 0;
    }
