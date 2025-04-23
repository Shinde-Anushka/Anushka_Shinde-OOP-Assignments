// Q7. The SimpleCircle class
//  1. Write a SimpleCircle class declaration (only) with one member variable: itsRadius. Include a
//  default constructor, a destructor, and accessor methods for radius.
//  2. Using the class you created in Exercise 1, write the implementation of the default constructor,
//  initializing itsRadius with the value 5.
//  3. Using the same class, add a second constructor that takes a value as its parameter and assigns that
//  value to itsRadius.
//  4. Create a prefix and postfix increment operator for your SimpleCircle class that increments
//  itsRadius.
//  5. Provide a copy constructor for SimpleCircle.
//  6. Provide an assignment operator for SimpleCircle.
//  7. Write a program that creates two SimpleCircle objects. Use the default constructor on one and
//  instantiate the other with the value 9. Call the increment operator on each and then print their values.
//  Finally, assign the second to the first and print its values.

#include <iostream>
using namespace std;

class SimpleCircle {
public:
    int itsRadius;

    SimpleCircle() : itsRadius(5) {}

    SimpleCircle(int r) : itsRadius(r) {}

    ~SimpleCircle() {}

    int fetchRadius() const {
        return itsRadius;
    }

    void updateRadius(int r) {
        itsRadius = r;
    }

    SimpleCircle operator++() {
        SimpleCircle temp;
        temp.itsRadius = ++itsRadius;
        return temp;
    }

    SimpleCircle operator++(int) {
        SimpleCircle temp;
        temp.itsRadius = itsRadius;
        itsRadius++;
        return temp;
    }

    SimpleCircle(const SimpleCircle& obj) {
        itsRadius = obj.itsRadius;
    }

    SimpleCircle operator=(const SimpleCircle obj) {
        itsRadius = obj.itsRadius;
        SimpleCircle result;
        result.itsRadius = itsRadius;
        return result;
    }
};

int main() {
    SimpleCircle cA;
    SimpleCircle cB(9);

    ++cA;
    cB++;

    cout << "Radius of Circle A: " << cA.fetchRadius() << endl;
    cout << "Radius of Circle B: " << cB.fetchRadius() << endl;

    cA = cB;

    cout << "Radius of Circle A after assignment: " << cA.fetchRadius() << endl;

    return 0;
}
