#include <iostream>

using namespace std;

class Aluno{

    public:

        string nome = "Douglas Rose";
        int idade = 16;
        string sexo = "F";
        string estado;

    void verificaEstado(string estadoDoAluno);


};

void Aluno::verificaEstado(string estadoDoAluno){

    if (estadoDoAluno == "SP" || estadoDoAluno == "sp"){

    this -> estado = "Sao Paulo";

    } else if (estadoDoAluno == "SC" || estadoDoAluno == "sc"){

    this -> estado = "Santa Catarina";

    } else if (estadoDoAluno == "RJ"){

    this -> estado = "Rio De Janeiro";

    }

};


int main(){


    Aluno *dadosAluno = new Aluno();

    cout<<"Nome: "<<dadosAluno -> nome<<"\n";
    cout<<"Idade: "<<dadosAluno -> idade<<"\n";
    cout<<"Sexo: "<<dadosAluno -> sexo<<"\n";

    dadosAluno -> verificaEstado("RJ");

    cout<<"Estado: "<<dadosAluno -> estado<<"\n";

return 0;
}
