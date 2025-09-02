#include <iostream>
using namespace std;
class Account
{
protected:
    double balance;

public:
    Account(double initialBalance)
    {
        if (initialBalance < 0.0)
        {
            balance = 0.0;
            cout << "Initial balance was invalid. Balance set to 0.0." << endl;
        }
        else
        {
            balance = initialBalance;
        }
    }

    void credit(double amount)
    {
        balance += amount;
    }

    bool debit(double amount)
    {
        if (amount > balance)
        {
            cout << "Debit amount exceeded account balance." << endl;
            return false;
        }
        else
        {
            balance -= amount;
            return true;
        }
    }

    double getBalance() const
    {
        return balance;
    }
};

class SavingsAccount : public Account
{
private:
    double interestRate;

public:
    SavingsAccount(double initialBalance, double interestRate)
        : Account(initialBalance), interestRate(interestRate)
    {
    }

    double calculateInterest() const
    {
        return balance * interestRate;
    }
};

class CheckingAccount : public Account
{
private:
    double transactionFee;

public:
    CheckingAccount(double initialBalance, double transactionFee)
        : Account(initialBalance), transactionFee(transactionFee)
    {
    }

    void credit(double amount)
    {
        Account::credit(amount);
        balance -= transactionFee;
    }

    bool debit(double amount)
    {
        bool success = Account::debit(amount);
        if (success)
        {
            balance -= transactionFee;
        }
        return success;
    }
};

int main()
{
    Account account(100.0);
    account.credit(50.0);
    cout << "Account balance: " << account.getBalance() << endl;

    SavingsAccount savingsAccount(500.0, 0.05);
    double interest = savingsAccount.calculateInterest();
    savingsAccount.credit(interest);
    cout << "Savings account balance: " << savingsAccount.getBalance() << endl;

    CheckingAccount checkingAccount(200.0, 2.0);
    checkingAccount.credit(100.0);
    cout << "Checking account balance: " << checkingAccount.getBalance() << endl;

    bool success = checkingAccount.debit(150.0);
    if (success)
    {
        cout << "Checking account balance after debit: " << checkingAccount.getBalance() << endl;
    }
    cout << "Complied by Zeeshan Ali" << endl;

    return 0;
}

