#ifndef Aluno_H_INCLUDED
#define Aluno_H_INCLUDED

class Aluno{

    public:

    //Objetos
    int codigo;
    std::string nome;
    int idade;
    std::string sexo;

    //Prototipando
    Aluno(int codigoAluno);
    void printDadosTela();

};



void Aluno::printDadosTela(){

    std::cout<<"Codigo "<<codigo<<"\n";
    std::cout<<"Nome "<<nome<<"\n";
    std::cout<<"Idade "<<idade<<"\n";
    std::cout<<"Sexo "<<sexo<<"\n";
}


Aluno::Aluno(int codigoAluno){

    if(codigoAluno == 1){

    codigo = 1;
    nome = "Marceline";
    idade = 27;
    sexo = "F";


    } else if(codigoAluno == 2){

    codigo = 1;
    nome = "Luna";
    idade = 22;
    sexo = "F";

    }
}



#endif
