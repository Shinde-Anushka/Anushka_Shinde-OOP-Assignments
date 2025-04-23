#include <iostream>
Using namespace std;

Class Mammal {
Public:
    Void identify() { cout << “I am a mammal.” << endl; }
};

Class SeaAnimal {
Public:
    Void identify() { cout << “I am a marine animal.” << endl; }
};

Class Whale : public Mammal, public SeaAnimal {
Public:
    Void identify() {
        Cout << “I belong to both categories: Mammal and Marine Animal.” << endl;
    }
};

Int main() {
    Mammal m;
    SeaAnimal s;
    Whale w;

    Cout << “Mammal: “; m.identify();
    Cout << “SeaAnimal: “; s.identify();
    Cout << “Whale: “; w.identify();

    Cout << “Calling Mammal method via Whale: “; w.Mammal::identify();
    Cout << “Calling Marine method via Whale: “; w.SeaAnimal::identify();

    Return 0;
}

