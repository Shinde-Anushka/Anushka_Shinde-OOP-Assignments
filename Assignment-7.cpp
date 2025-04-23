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
