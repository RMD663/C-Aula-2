#include <iostream>

#include <locale.h>

using namespace std;


int main(){

   string letra;

    cout<<"Insira uma letra: ";
    cin>>letra;


if( letra == "a" || letra == "A" || letra == "E" || letra == "e" || letra == "U" ){

    cout<<letra<<" E uma vogal";

} else {

    cout<<"e uma consoante";

}


return 0;

}


