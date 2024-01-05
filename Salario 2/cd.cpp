#include <iostream>

#include <locale.h>

using namespace std;


int main(){

    double salariofin, salario, horas, salariomes, inss, sindicato, impostoderenda;

    cout <<"Insira o numero de horas trabalhadas neste mes: ";
    cin >> horas;

    cout <<"\n Insira o valor das horas trabalhadas: ";
    cin >> salario;

    salariomes = horas * salario;

    salariofin = 0;
    impostoderenda = (11*salariomes) /100;
    inss = (8*salariomes) /100;
    sindicato = (5*salariomes) /100;
    salariofin = impostoderenda + inss + sindicato - salariomes;
    salariofin = salariofin *-1;

    cout<<"\nSalario bruto: "<<salariomes;
    cout<<"\nImpostos:";
    cout<<"\nInss(8%): "<<inss;
    cout<<"\nImposto de renda(5%): "<<impostoderenda;
    cout<<"\nSindicato(5%): "<<sindicato;
    cout<<"\nSalario liquido: "<<salariofin;





return 0;
}
