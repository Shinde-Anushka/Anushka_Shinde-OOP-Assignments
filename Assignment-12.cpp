#include <iostream>
using namespace std;

class Fruit {
public:
    int totalFruits = 0;
    
};

class Apple : public Fruit {
public:
    int TotalApple;
    void apple(int AppleCount) {
        TotalApple = AppleCount;

        cout << "Number of apples: " <<endl;
        cout<<TotalApple << endl;

}
};

class Mango : public Fruit {
public:
    int TotalMango;
    void mango(int count) {
        TotalMango = count;
        
        cout << "Number of mangoes: " <<endl;
        cout<<TotalMango << endl;

}
};

int main() {
    Apple a;    
    Mango m;
    a.apple(5);
    m.mango(10);   
   
    int total = a.TotalApple + m.TotalMango;
    cout << "Total number of fruits: " << total << endl;

    return 0;
}
