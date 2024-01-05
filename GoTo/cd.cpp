#include <iostream>

#include <locale.h>

using namespace std;

    int media;

int main(){

    string pais;

restart:

    cout << "Qual pais vai ganhar a copa?\n";
    cin >> pais;

    if (pais == "Brasil"){

    cout<<"Muito bem!\n\n";

    } else if (pais == "BRASIL"){

    cout<<"Muito bem!\n\n";

    } else if (pais == "brasil"){

     cout<<"Muito bem!\n";

    } else {

    cout<<"\n";
    goto restart;

    }








return 0;
}
