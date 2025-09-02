#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double baseSalary;

public:
    Employee(string n, double salary) : name(n), baseSalary(salary) {}

    virtual double calculateSalary() = 0;
};

class FullTimeEmployee : public Employee {
private:
    double bonus;

public:
    FullTimeEmployee(string n, double salary, double b) : Employee(n, salary), bonus(b) {}

    double calculateSalary() {
        return baseSalary + bonus;
    }
};

class PartTimeEmployee : public Employee {
private:
    int hoursWorked;
    double hourlyRate;

public:
    PartTimeEmployee(string n, double rate, int hours) : Employee(n, 0), hourlyRate(rate), hoursWorked(hours) {}

    double calculateSalary() {
        return hoursWorked * hourlyRate;
    }
};

int main() {
    FullTimeEmployee fullTime("Babar", 5000, 1000);
    PartTimeEmployee partTime("Rizwan", 20, 25);

    Employee* emp1 = &fullTime;
    Employee* emp2 = &partTime;

    cout << emp1->calculateSalary() << endl;
    cout << emp2->calculateSalary() << endl;

    return 0;
}

