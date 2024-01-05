#include <iostream>

using namespace std;

void FuncNOME(string nomeUsuario = "JJ");
void FuncIDADE(int idadeUsuario = 11);
int main(){

FuncIDADE();
FuncNOME();

return 0;
}


void FuncIDADE(int idadeUsuario){

cout<<"Idade: "<<idadeUsuario;

}

void FuncNOME(string nomeUsuario){

cout<<"\nNome "<<nomeUsuario<<"\n";

}
