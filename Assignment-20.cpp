//Q20 Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some more
//amount to it. Create a class 'AddAmount' with a data member named 'amount' with an initial value of
//$50. Now make two constructors of this class as follows:
//1 - without any parameter - no amount will be added to the Piggie Bank
//2 - having a parameter which is the amount that will be added to the Piggie Bank
//Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.

#include <iostream>
using namespace std;

class AddAmount {
private:
    int amount;

public:
    // Constructor without any parameter
    AddAmount() {
        amount = 50;  // Initial amount only
    }

    // Constructor with parameter to add to the initial amount
    AddAmount(int add) {
        amount = 50 + add;  // Add to initial amount
    }

    void displayAmount() {
        cout << "Final amount in Piggie Bank: $" << amount << endl;
    }
};

// Example usage
int main() {
    // Object with no additional amount
    AddAmount piggie1;
    piggie1.displayAmount();  // Should show $30

    // Object with additional amount
    AddAmount piggie2(70);
    piggie2.displayAmount();  // Should show $100

    return 0;
}
