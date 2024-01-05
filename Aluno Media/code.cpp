#include <iostream>

#include <locale.h>

using namespace std;

    int media;

int main(){

    media = 7;

    string nome;
    double nota1, nota2, nota3, nota4, notaf;

    cout << "Insira o nome do aluno \n";
    getline(cin, nome);

    cout<<"Insira as notas do aluno:  \n";
    cout<< "Insira a nota 1: \n";
    cin >> nota1;

    cout<< "Insira a nota 2: \n";
    cin >> nota2;

    cout<< "Insira a nota 3: \n";
    cin >> nota3;

    cout<< "Insira a nota 4: \n";
    cin >> nota4;

    notaf = (nota1 + nota2 + nota3 + nota4)  /4 ;

    if (notaf > media)

    cout<<"O aluno(A): " <<nome<< " Obeteve a seguinte media; "<<notaf<< " E foi aprovado";

    else

     cout<<"O aluno(A): " <<nome<< " Obeteve a seguinte media; "<<notaf <<" E foi reprovado";

    return 0;

}
