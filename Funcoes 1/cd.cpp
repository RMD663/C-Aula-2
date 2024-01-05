#include <iostream>

using namespace std;

void FuncMSG();
void FuncSOMA(int numA, int numB);
int FuncSOMATRES(int n1, int n2, int n3);

int main(){

FuncMSG();

FuncSOMA(2, 5);

    int n1, n2, n3, soma;

     cout<<"Digite A: ";
    cin>>n1;
     cout<<"Digite B: ";
    cin>>n2;
     cout<<"Digite C: ";
    cin>>n3;

    soma = FuncSOMATRES(n1, n2, n3);

    cout<<endl<<soma;


return 0;

}


int FuncSOMATRES(int n1, int n2, int n3){

    return n1 + n2 + n3;

}



void FuncSOMA(int numA, int numB){

    cout<<"\nTotal = "<<numA + numB<<endl;

}


void FuncMSG(){

cout<<"OLA VAZIO";

}
