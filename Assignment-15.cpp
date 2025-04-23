// 16. All the banks operating in India are controlled by RBIBank. RBIBank has set a well defined guideline (e.g.
//     minimum interest rate, minimum balance allowed, maximum withdrawal limit etc) which all banks
//     must follow. For example, suppose RBIBank has set minimum interest rate applicable to a saving bank
//     account to be 4% annually; however, banks are free to use 4% interest rate or to set any rates above it

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
