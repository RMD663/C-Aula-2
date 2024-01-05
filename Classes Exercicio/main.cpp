#include <iostream>
#include "Animal.h"

using namespace std;

int main(){

    string animal;


    cin>>animal;
    Animal *SomAnimal1 = new Animal(animal);
    SomAnimal1  -> AnimalSom = animal;



    SomAnimal1 -> ImprimirNaTela();
return 0;
}

// Crie uma classe chamada Animal que tenha os atributos nome, especie e som.
// A classe deve ter um construtor que receba esses atributos como parâmetros e os inicialize.
// A classe deve ter um método chamado fazer_som que imprima na tela o nome e o som do animal.
// Crie dois objetos da classe Animal, um representando um cachorro e outro representando um gato, e chame o método fazer_som para cada um deles.

// Escreva seu código abaixo
