#include <iostream>

#include <locale.h>

using namespace std;

    int media;

int main(){

    int num;
    string fruta;

    num = 5;

    if (num >= 2 && num <= 10){

    cout<<num<<" E menor e maior que 10 e 2\n";

    }else{

    cout<<num<<"E menor e maior que 2 e 10";

    }

    num = 4;

    if(num >= 2 || num <= 10 ){

    cout<<num<<" E menor e maior que 2\n";

    }else{

    cout<<num<<"E menor que 2 ou 10 \n";

    }

    fruta = "Laranja";


    if(fruta == "Goiaba" || fruta == "Maca"){

    cout<<"A fruta e uma Maca ou Goiaba";

    }else if (fruta == "Laranja" || fruta == "laranja"){

    cout<<"A fruta e uma laranja\n";

    }




return 0;
}
