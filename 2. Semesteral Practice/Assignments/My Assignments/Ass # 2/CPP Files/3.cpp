#include <iostream>
using namespace std;

class SavingsAccount {
private:
    static double annualInterestRate;
    double savingsBalance;

public:
    SavingsAccount(double balance) : savingsBalance(balance) {}

    void calculateMonthlyInterest() {
        double monthlyInterest = savingsBalance * (annualInterestRate / 12.0);
        savingsBalance += monthlyInterest;
    }

    static void modifyInterestRate(double newRate) {
        annualInterestRate = newRate;
    }

    double getBalance() const {
        return savingsBalance;
    }
};

double SavingsAccount::annualInterestRate = 0.0;

int main() {
    SavingsAccount saver1(100000.0);
    SavingsAccount saver2(200000.0);

    SavingsAccount::modifyInterestRate(0.03);

    cout << "Initial Balances:" << endl;
    cout << "Saver 1: $" << saver1.getBalance() << endl;
    cout << "Saver 2: $" << saver2.getBalance() << endl;

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "\nBalances after one month of 3% interest:" << endl;
    cout << "Saver 1: $" << saver1.getBalance() << endl;
    cout << "Saver 2: $" << saver2.getBalance() << endl;

    SavingsAccount::modifyInterestRate(0.04);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "\nBalances after one more month of 4% interest:" << endl;
    cout << "Saver 1: $" << saver1.getBalance() << endl;
    cout << "Saver 2: $" << saver2.getBalance() << endl;
    cout << "Compiled by Zeeshan Ali " << endl;

    return 0;
}

