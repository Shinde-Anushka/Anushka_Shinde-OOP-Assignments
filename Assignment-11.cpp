//Q11 Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale
//which inherits both the above classes. Now, create a function in each of these classes which prints "I
//am mammal", "I am a marine animal" and "I belong to both the categories: Mammals as well as
//Marine Animals" respectively. Now, create an object for each of the above class and try calling
//1 - function of Mammals by the object of Mammal
//2 - function of MarineAnimal by the object of MarineAnimal
//3 - function of BlueWhale by the object of BlueWhale
//4 - function of each of its parent by the object of BlueWhale

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

