//Q19 Create a class named 'Rectangle' with two data members- length and breadth and a function to
//calculate the area which is 'length*breadth'. The class has three constructors which are :
//1 - having no parameter - values of both length and breadth are assigned zero.
//2 - having two numbers as parameters - the two numbers are assigned as length and breadth
//respectively.
//3 - having one number as parameter - both length and breadth are assigned that number.
//Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, breadth;

public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    Rectangle(int side) {
        length = side;
        breadth = side;
    }

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(5, 10);
    Rectangle r3(7);

    cout << "Area of r1 (no parameters): " << r1.area() << endl;
    cout << "Area of r2 (two parameters): " << r2.area() << endl;
    cout << "Area of r3 (one parameter): " << r3.area() << endl;

    return 0;
}
