#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    string accountNumber;
    double balance;

public:
    Account(const string num, double bal) : accountNumber(num), balance(bal) {}

    virtual void displayInfo() = 0;

    virtual void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }
};

class SavingsAccount : public Account {
public:
    SavingsAccount(const string num, double bal) : Account(num, bal) {}

    void displayInfo() override {
        cout << "Savings Account Information:" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    void withdraw(double amount) override {
        Account::withdraw(amount);
    }
};

class CheckingAccount : public Account {
public:
    CheckingAccount(const string& num, double bal) : Account(num, bal) {}

    void displayInfo() override {
        cout << "Checking Account Information:" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    SavingsAccount savings("SA123", 1000);
    CheckingAccount checking("CA456", 500);

    Account* accountPtr = &savings;
    accountPtr->displayInfo();
    accountPtr->deposit(200);
    accountPtr->withdraw(150);

    accountPtr = &checking;
    accountPtr->displayInfo();
    accountPtr->withdraw(300);

    return 0;
}

