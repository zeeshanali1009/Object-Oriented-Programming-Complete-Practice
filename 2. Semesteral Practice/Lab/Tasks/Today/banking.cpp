#include <iostream>
#include <string>

using namespace std;

class BankAccount {
protected:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(string number, string name, double initialBalance)
        : accountNumber(number), accountHolderName(name), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited Rs " << amount << ". New balance: Rs " << balance << endl;
    }

    virtual void withdraw(double amount) = 0; // Pure virtual function, must be overridden in derived classes

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: Rs " << balance << endl;
    }
};

class CheckingAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CheckingAccount(string number, string name, double initialBalance, double limit)
        : BankAccount(number, name, initialBalance), overdraftLimit(limit) {}

    void withdraw(double amount) {
        if (balance - amount >= -overdraftLimit) {
            balance -= amount;
            cout << "Withdrawn Rs " << amount << ". New balance: Rs " << balance << endl;
        } else {
            cout << "Insufficient funds for withdrawal." << endl;
        }
    }
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(string number, string name, double initialBalance)
        : BankAccount(number, name, initialBalance) {}

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn Rs " << amount << ". New balance: Rs " << balance << endl;
        } else {
            cout << "Insufficient funds for withdrawal." << endl;
        }
    }
};

int main() {
    // Create a CheckingAccount object
    CheckingAccount checking("C89696", "Zeeshan", 5000, 1000);
    cout << "Checking Account Details:" << endl;
    checking.display();
    checking.deposit(2000);
    checking.withdraw(3000);
    checking.withdraw(8000);

    cout << "\n";

    // Create a SavingsAccount object
    SavingsAccount savings("S5678", "Zeeshan Ali", 10000);
    cout << "Savings Account Details:" << endl;
    savings.display();
    savings.deposit(1500);
    savings.withdraw(5000);
    savings.withdraw(8000);

    return 0;
}

