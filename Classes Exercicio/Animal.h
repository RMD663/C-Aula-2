#ifndef Animal_H_ICLUDED
#define Animal_H_ICLUDED

class Animal{

public:

    //---Objetos---
    std::string AnimalSom, Animal_Som, tipoDeAnimal;
    int codigo;


    //---Metodo Construtor//Prototipando---
    Animal(std::string AnimalSom);
    void ImprimirNaTela();


};

void Animal::ImprimirNaTela(){

    std::cout<<"O animal: "<<tipoDeAnimal<<" Faz o som: "<<Animal_Som;

}




Animal::Animal(std::string AnimalSom){

    if (AnimalSom == "Cachorro" || AnimalSom == "cachorro"){

    Animal_Som = "Au Au";
    tipoDeAnimal = "Cachorro";
    codigo = 1;

    } else if (AnimalSom == "Gato" || AnimalSom == "gato"){

    Animal_Som = "Miau";
    tipoDeAnimal = "Gato";
    codigo = 2;

    }
}



#endif
