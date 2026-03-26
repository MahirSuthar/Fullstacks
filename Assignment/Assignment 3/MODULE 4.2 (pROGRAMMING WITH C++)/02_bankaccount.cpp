#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    long accountNumber;
    string accountType;
    double balance;

public:
    
    void assignValues(string name, long accNum, string type, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = type;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance! Withdrawal failed." << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else {
            balance -= amount;
            cout << "Successfully withdrawn: " << amount << endl;
        }
    }

    
    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Current Balance: " << balance << endl;
        cout << "-----------------------" << endl;
    }
};

int main() {
    BankAccount myAccount;

  
    myAccount.assignValues("Mahir Suthar", 123456789, "Savings", 5000.0);

    
    myAccount.display();

   
    myAccount.deposit(1500.50);

    
    myAccount.withdraw(2000.0);

    
    myAccount.display();

    return 0;
}

