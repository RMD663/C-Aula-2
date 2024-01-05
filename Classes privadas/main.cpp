#include <iostream>
using namespace std;

#include "Aluno.h"

int main(){

    Aluno *codigoAluno = new Aluno(1);

    codigoAluno -> exibirDados();
    codigoAluno -> exibirDados();

    cout<<"\n\n_____________________________________\n\n";

    cout<<codigoAluno -> nome<<"\n";
    cout<<codigoAluno -> getidade()<<"\n";



return 0;

}
