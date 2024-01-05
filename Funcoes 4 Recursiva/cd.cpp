#include <iostream>

using namespace std;

void FUNATEDEZ(int n1, int contador);

int main(){

FUNATEDEZ(10, 1);

return 0;
}


void FUNATEDEZ(int n1, int contador){

    cout<<"Numero Func: "<<contador<<"\n";

    if(n1 > contador){

        FUNATEDEZ(n1, contador);

    }

}
