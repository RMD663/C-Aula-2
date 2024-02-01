#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int T = 3;

int main(){
   float Cel, Fah, Kel;
    int func;
    
    START:
    
    system("clear");
cout<<"\nInsira a operacão que deseja efetuar\n1.Celsius > Fahrenheit\n2.Fahrenheit > Celsius\n3.Kelvin > Celsius\n4.Celsius > Kelvin\n5.Fahrenheit > Kelvin\n6.Kelvin > Fahrenheit\n";
    
    cin>>func;
    
    
    
   switch(func){
    
    case 1:
    system("clear");
    cout<<"\nInsira o valor a ser convertido\n";
    cin>>Cel;
    cout<<"\n"<<Cel<<" Celsius é igual a "<<Cel * 1.8 + 32<<" Farenheit\n";
    break;
       
    case 2:
       system("clear");
    cout<<"\nInsira o valor a ser convertido\n";
    cin>>Fah;
    cout<<"\n"<<Fah<<" Fahrenheit é igual a "<<(Fah-32)/1.8<<" Celsius\n";
      break; 
       
       case 3:
       
        system("clear");
    cout<<"\nInsira o valor a ser convertido\n";
    cin>>Kel;
    cout<<"\n"<<Kel<<" Kelvin é igual a "<<Kel - 273.15 <<" Celsius\n";
       
       break;
       
       case 4:
        system("clear");
    cout<<"\nInsira o valor a ser convertido\n";
    cin>>Cel;
    cout<<"\n"<<Cel<<" Celsius é igual a "<<Cel + 273.15 <<" Kelvin\n";
       break;
       case 5:
       
        system("clear");
    cout<<"\nInsira o valor a ser convertido\n";
    cin>>Fah;
    cout<<"\n"<<Fah<<" Fahrenheit é igual a "<<(Fah + 459.67) *5/9<<" Kelvin\n";
       
       break;
       
       
       
       case 6:
       
         system("clear");
    cout<<"\nInsira o valor a ser convertido\n";
    cin>>Kel;
    cout<<"\n"<<Kel<<" Kelvin é igual a "<<(Kel * 1.8) - 459.67 <<" Fahrenheit\n";
       
       
       break;
       
       default:
       
        cout<<"\nValor inserido invalido\n";
       
       clock_t inicio = clock();
       
       clock_t fim = inicio + T * CLOCKS_PER_SEC;
       for (clock_t atual = clock(); atual < fim; atual = clock())
    {
       
      
    }
       goto START;
        
       break;
       
   }
    
    
    
    return 0;
}
