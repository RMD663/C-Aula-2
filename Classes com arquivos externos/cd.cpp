#include <iostream>


#include "Aluno.h"

using namespace std;

int main(){
int contador;

for(contador = 1; contador < 6; contador++){
Aluno *CodigoAluno = new Aluno(contador);

    CodigoAluno -> printNaTela();
}



return 0;

}

