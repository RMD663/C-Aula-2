#include <iostream>

using namespace std;

    int main(){

    int candidato, candidatoA, candidatoB, candidatoC, nulo, total, votos, voto, eleitores;
    cout<<"Insira o numero total de eleitores: ";
    cin>>eleitores;

    for(eleitores; votos < eleitores; votos++){

    cout<<"\nInsira o candidato que deseja votar\n1.Candidato A\n2.Candidato B\n3.Candidato C\n4.Nulo\n";
    cin>>voto;
    cout<<endl;
    if(voto == 1){

    candidatoA++;

    } else if (voto == 2){

    candidatoB++;

    } else if (voto == 3){

    candidatoC++;

    } else {

    nulo++;

    }
    }

    cout<<"\nContagem dos votos\n";
    cout<<"Eleitores totais: "<<eleitores;
    cout<<"\nVotos validos: "<<votos-nulo;
    cout<<"\nCandidato A: "<<candidatoA;
    cout<<"\nCandidato B: "<<candidatoB;
    cout<<"\nCandidato C: "<<candidatoC;
    cout<<"\nVotos em branco: "<<nulo<<endl;





    return 0;
    }
