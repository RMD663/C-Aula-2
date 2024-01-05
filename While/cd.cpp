#include <iostream>

#include <locale.h>

using namespace std;

int main(){


    int i, num;
    float nota, media, resultado;

    i = 1;

    while (i < 5){


    i++;
    cout<<"\nO contador esta em: "<<i;


    }

    i = 0;
    resultado = 0;

    while(i < 4){

    i++;

    cout<<"\nInsira a nota: "<<i<<": ";
    cin>>nota;


    resultado = nota + resultado;



    }

    media = resultado/4;

    if(media < 7){

    cout<<"\nO aluno foi reprovado com uma media de: "<<media;

    } else {

    cout<<"O aluno foi aprovado com uma media de: "<<media;

    }




return 0;
}
