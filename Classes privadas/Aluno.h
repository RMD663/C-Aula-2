#ifndef Aluno_H_INCLUDED
#define Aluno_H_INCLUDED

class Aluno{




    private:

    int idade;
    std::string sexo;




    public:

    int codigo;
    std::string nome;
    Aluno(int codigoAluno);


int getidade();
int idadeAluno(int AlunoIdade);
void exibirDados();

};

int Aluno::idadeAluno(int AlunoIdade){

    idade = AlunoIdade;

}


int Aluno::getidade(){

    return idade;

}




void Aluno::exibirDados(){

    std::cout<<"Codigo "<<codigo<<"\n";
    std::cout<<"Nome "<<nome<<"\n";
    std::cout<<"Idade "<<idade<<"\n";
    std::cout<<"Sexo "<<sexo<<"\n\n\n\n";
}

Aluno::Aluno(int codigoAluno){

    if (codigoAluno == 1){

    codigo = 1;
    nome = "Douglas";
    idade = 15;
    sexo = "M";


    }

}


#endif
