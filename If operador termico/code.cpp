#include <iostream>

#include <locale.h>

using namespace std;

    int media;

int main(){

    string letra, mensagem, sexo;
    int preco;

    cout<<"Digite uma letra\n";
    cin>>letra;

    (letra == "a")? mensagem = "Voce digitou a letra A" : mensagem = "Voce nao digitou a letra A";


    cout<<"-------------------------\n";
    cout<<"Letra digitada: "<<letra<<endl;
    cout<<"Resultado: "<<mensagem<<endl;

    cout<<"-------------------------\n";
    cin >> letra;

    (letra == "A") ? mensagem = "A letra digitada e uma vogal" : mensagem = "A letra digitada nao e uma vogal";

    cout<<"-------------------------\n";

    cout<<"Digite seu sexo\n";
    cin>>sexo;

    preco = 15;

    (sexo == "m") ? preco++ : preco-=3;

    cout<<"Ingresso; "<<preco<<endl;
    cout<<"Sexo; "<<sexo<<endl;

return 0;

}
