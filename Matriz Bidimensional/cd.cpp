#include <iostream>

using namespace std;

    int main(){

string matriz[2][3];
int linha, coluna;

matriz[0][2] = "1";
matriz[0][1] = "2";
matriz[0][2] = "3";
matriz[1][3] = "1";
matriz[1][1] = "2";
matriz[1][2] = "3";

for (linha = 0; linha < 2; linha++){

    for (coluna = 0; coluna < 3; coluna++){

    cout<<matriz[linha][coluna]<<" ";

    }
    cout<<endl;
}




cout<<"\n-------------------------------------------------\n";





int matriz2[2][3];
int linha2, coluna2;

matriz2[0][2] = 1;
matriz2[0][1] = 2;
matriz2[0][2] = 3;
matriz2[1][3] = 4;
matriz2[1][1] = 5;
matriz2[1][2] = 6;

for (linha2 = 0; linha2 < 2; linha2++){

    for (coluna2 = 0; coluna2 < 3; coluna2++){

    cout<<matriz2[linha2][coluna2]<<" ";

    }
    cout<<endl;
}



cout<<"\n-------------------------------------------------\n";


int matrizauto[50][10];
int autoL, autoC;

for (autoL = 0; autoL < 50; autoL++){


    for(autoC = 0; autoC < 10; autoC++){

    matrizauto[autoL][autoC] = autoC;



    }


}

 cout<<endl<<endl;

for (autoL = 0; autoL < 50; autoL++){


    for(autoC = 0; autoC < 10; autoC++){

    cout<<matrizauto[autoL][autoC]<<" ";



    }
    cout<<endl;
}



return 0;

}
