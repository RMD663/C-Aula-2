#include <iostream>
#include "AlterarAluno.h"

using namespace std;


int main(){



string nomeAluno, sexoAluno;
int idadeAluno;


Aluno *dadosAluno1 = new Aluno(1);

dadosAluno1 -> nome = nomeAluno;

dadosAluno1 -> printDadosTela();

cout<<"\nInsira o nome do aluno: ";
cin>>nomeAluno;
cout<<"\nInsira a idade do aluno ";
cin>>idadeAluno;
cout<<"\nInsira o sexo do aluno ";
cin>>idadeAluno;

Aluno *dadosAluno2 = new Aluno(2);

dadosAluno2 -> nome = nomeAluno;
dadosAluno2 -> idade = idadeAluno;
dadosAluno2 -> sexo = sexoAluno;

dadosAluno2 -> printDadosTela();

return 0;
}
