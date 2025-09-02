/*Define the class bankAccount to implement the basic properties of a bank account. An object of this class should store the following data:
Account holder's name (string), account number (int), account type (string, checking/saving), balance (double), and interest rate (double).
(Store interest rate as a decimal number.) Add appropriate member functions to manipulate an object.
Use a static member in the class to automatically assign account numbers. Also declare an array of 10 components of type bankAccount
to process up to 10 customers and write a program to illustrate how to use your class.*/
#include <iostream>
using namespace std;
class bankAccount
{
public:
    string name;
    int accountnumber = 1;
    string accounttype;
    double balance;
    double interest;
    void input(bankAccount cus[10])
    {
        for (int i = 0; i < 10; i++)
        {
            cout << "\n\nAccount Number " << accountnumber++ << endl;
            cout << "Enter Name: ";
            cin >> cus[i].name;
            cout << "Enter Account type: ";
            cin >> cus[i].accounttype;
            cout << "Enter Balance: ";
            cin >> cus[i].balance;
            cout << "Enter interest: ";
            cin >> cus[i].interest;
        }
    }

    void display()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << "\n\nAccount Number: " << i + 1 << endl;
            cout << "Name: " << name << endl;
            cout << "Account type: " << accounttype << endl;
            cout << "Balance: " << balance << endl;
            cout << "Interest: " << interest << endl << endl;
        }
    }
};

int main()
{
    bankAccount cus[10];
    cus[10].input(cus);
    cus[10].display();
    return 0;
}
