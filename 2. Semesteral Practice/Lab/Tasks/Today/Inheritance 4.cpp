#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string fname;
    string lname;
    int age;
    string phone;
    double basicSalary;
    double overtime;

public:
    Employee(string fname, string lname, int age, string phone, double basicSalary, double overtime) {
        this->fname = fname;
        this->lname = lname;
        this->age = age;
        this->phone = phone;
        this->basicSalary = basicSalary;
        this->overtime = overtime;
    }

    void input() {
        cout << "Enter first name: ";
        cin >> fname;
        cout << "Enter last name: ";
        cin >> lname;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter phone: ";
        cin >> phone;
        cout << "Enter basic salary: ";
        cin >> basicSalary;
        cout << "Enter overtime hours: ";
        cin >> overtime;
    }

    void displaySalary() {
        cout << "Employee Name: " << fname << " " << lname << endl;
        cout << "Age: " << age << endl;
        cout << "Phone: " << phone << endl;
    }
};

class ContractualEmp : public Employee {
public:
    ContractualEmp(string fname, string lname, int age, string phone, double basicSalary, double overtime)
        : Employee(fname, lname, age, phone, basicSalary, overtime) {}

    void displaySalary() {
        Employee::displaySalary();
        double totalSalary = basicSalary + (overtime * 1000);
        cout << "Total Salary: " << totalSalary << endl;
    }
};

class PermanentEmp : public Employee {
public:
    PermanentEmp(string fname, string lname, int age, string phone, double basicSalary, double overtime)
        : Employee(fname, lname, age, phone, basicSalary, overtime) {}

    void displaySalary() {
        Employee::displaySalary();
        double annualAllowance = basicSalary * 0.025;
        double totalSalary = basicSalary + (overtime * 750) - annualAllowance;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main() {
    int choice;

    do {
        cout << "\nMenu:\n1. Contractual Employee\n2. Permanent Employee\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string fname, lname, phone;
                int age;
                double basicSalary, overtime;

                cout << "Enter Contractual Employee details:" << endl;
                cout << "----------------------------------" << endl;
                cin.ignore();  // To clear the newline character
                ContractualEmp cEmp(fname, lname, age, phone, basicSalary, overtime);
                cEmp.input();
                cEmp.displaySalary();
                break;
            }
            case 2: {
                string fname, lname, phone;
                int age;
                double basicSalary, overtime;

                cout << "Enter Permanent Employee details:" << endl;
                cout << "--------------------------------" << endl;
                cin.ignore();  // To clear the newline character
                PermanentEmp pEmp(fname, lname, age, phone, basicSalary, overtime);
                pEmp.input();
                pEmp.displaySalary();
                break;
            }
            case 3:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please choose again." << endl;
        }
    } while (choice != 3);

    return 0;
}

