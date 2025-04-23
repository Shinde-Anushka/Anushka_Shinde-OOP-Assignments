#include <iostream>
using namespace std;

class Account {
private:
    char name[30];
    int AccountNo;
    char AccountType[30];

public:
    float balance;

    void Entry() {
        cout << "Enter customer name: "<<endl;
        cin >> name;
        cout << "Enter account number: "<<endl;
        cin >> AccountNo;
        
        cout << "Enter initial balance: "<<endl;
        cin >> balance;
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited!!\n";
    }

    void displayBalance() {
        cout << "Current balance: " << balance <<"Rs!"<< endl;
    }
};

class SavingAccount : public Account {
public:
    void Interest() {
        float rate;
        int time;
        float interest;
        cout << "Enter interest rate: ";
        cin >> rate;
        cout << "Enter time (in years): ";
        cin >> time;
        //I have used this formula to calculculate the intrets!
        interest = (balance * rate * time) / 100;
        balance += interest;
        cout << "Interest added: " << interest << endl;
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        } 
        else {
            cout << "Low balance!\n";
        }
    }
};

class CurrentAccount : public Account {
public:
    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal is done!"<<endl;

        } else {
            cout << "Not enough balance!"<<endl;
            void checkMinimumBalance();
        }
    }

    void checkMinimumBalance() {
        if (balance < 1000) {
            cout << "Balance is below minimum. Penalty of Rs. 100 imposed.\n";
            balance -= 100;
        }
    }
};

int main() {
    SavingAccount S;
    CurrentAccount C;
    
    int AccType;
    cout << "Enter account type:\n1.Saving\n2.Current\n"<<endl<<"Select any one !!"<<endl;
    cin >> AccType;

    if(AccType == 1){
    cout <<" SAVING ACCOUNT"<<endl;

    S.Entry();
    S.deposit();
    S.Interest();
    S.withdraw();
    S.displayBalance();
    
    }

    else if(AccType ==2){

    cout << " CURRENT ACCOUNT"<<endl;

    C.Entry();
    C.deposit();
    C.displayBalance();
    C.withdraw();
    C
      .displayBalance();
    C.checkMinimumBalance();
    C.displayBalance();

    }
    
    else{
        cout<<"Invalid Choice"<<endl;
    }
    return 0;
}
