// Q15. Create a class named Shape with a function that prints "This is a shape". Create another class
// named Polygon inheriting the Shape class with the same function that prints "Polygon is a shape".
// Create two other classes named Rectangle and Triangle having the same function which prints
// "Rectangle is a polygon" and "Triangle is a polygon" respectively. Again, make another class named
// Square having the same function which prints "Square is a rectangle".
// Now, try calling the function by the object of each of these classes

#include <iostream>
#include <string>
using namespace std;


class RBI {
public:
    double min_Interest_Rate;
    double minBalance;
    double maxWithdrawalLimit;

    RBI() {
        min_Interest_Rate = 4.0;  
        minBalance = 1000.0;    
        maxWithdrawalLimit = 50000.0;  
    }

    void displayGuidelines() {
        cout << "RBI Guidelines:" << endl;
        cout << "Minimum Interest Rate: " << min_Interest_Rate << "%" << endl;
        cout << "Minimum Balance Required: Rs. " << minBalance << endl;
        cout << "Maximum Withdrawal Limit: Rs. " << maxWithdrawalLimit << endl;
    }
};

class Bank : public RBI {
public:
    string bankName;
    double interestRate;

    Bank(string name, double rate) {
        bankName = name;
        interestRate = (rate >= min_Interest_Rate) ? rate : min_Interest_Rate;
    }

    void displayBankDetails() {
        cout << "Bank Name: " << bankName << endl;
        cout << "Offered Interest Rate: " << interestRate << "%" << endl;
        cout << "Minimum Balance Required: Rs. " << minBalance << endl;
        cout << "Maximum Withdrawal Limit: Rs. " << maxWithdrawalLimit << endl;
    }
};

int main() {
    RBI rbi;
    cout << "RBI Banking Guidelines:" << endl;
    rbi.displayGuidelines();

    Bank sbi("State Bank of India", 4.5);
    Bank hdfc("HDFC Bank", 5.0);
    Bank icici("ICICI Bank", 4.2);

    cout << "Bank Details:" << endl;
    sbi.displayBankDetails();
    hdfc.displayBankDetails();
    icici.displayBankDetails();
    return 0;
}
