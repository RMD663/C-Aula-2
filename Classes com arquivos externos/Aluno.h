#ifndef Aluno_H_ICLUDED
#define Aluno_H_ICLUDED

class Aluno{

    public:


        //OBJETOS

    int codigo;
    std::string nome;
    int idade;
    std::string sexo;
    Aluno(int CodigoAluno);

    void printNaTela();

};

void Aluno::printNaTela(){

    std::cout<<"Codigo: "<<codigo;
    std::cout<<"\nNome: "<<nome;
    std::cout<<"\nIdade: "<<idade;
    std::cout<<"\nSexo: "<<sexo<<"\n\n";


}

    Aluno::Aluno(int CodigoAluno){

    if (CodigoAluno == 1){

    codigo = 1;
    nome = "Marcela Santos";
    idade = 17;
    sexo = "F";

    } else if (CodigoAluno == 2){

    codigo = 2;
    nome = "Luis Felipe";
    idade = 14;
    sexo = "M";

    } else if (CodigoAluno == 3){

    codigo = 3;
    nome = "Felicia Santos";
    idade = 16;
    sexo = "F";

    } else if (CodigoAluno == 4){

    codigo = 4;
    nome = "Jose Paulo";
    idade = 12;
    sexo = "M";

    } else if (CodigoAluno == 5){

    codigo = 5;
    nome = "Pedro Fernandes";
    idade = 18;
    sexo = "M";

    }
    }


#endif
