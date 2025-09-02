#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name, designation;
    int age, salary;

public:
    Employee() : name(""), designation(""), age(0), salary(0) {}
    Employee(string name, string designation, int age, int salary)
        : name(name), designation(designation), age(age), salary(salary) {}

    void setname(string name)
    {
        this->name = name;
    }

    void setdesignation(string designation)
    {
        this->designation = designation;
    }

    void setage(int age)
    {
        this->age = age;
    }

    void setsalary(int salary)
    {
        this->salary = salary;
    }

    string getname()
    {
        return name;
    }

    string getdesignation()
    {
        return designation;
    }

    int getage()
    {
        return age;
    }

    int getsalary()
    {
        return salary;
    }

    double getaveragesalary(Employee employees[], int numEmployees)
    {
        int totalSalary = 0;
        for (int i = 0; i < numEmployees; ++i)
        {
            totalSalary += employees[i].getsalary();
        }

        return (totalSalary) / numEmployees;
    }
};

int main()
{
    int numEmployees = 3;
    Employee employees[numEmployees];
    for (int i = 0; i < numEmployees; ++i)
    {
        employees[i].setname("Employee "  + i );
        employees[i].setdesignation("Designation " + i );
        employees[i].setage(25 + i);
        employees[i].setsalary(25000 * (i + 1));
    }

    Employee emp;
    double averageSalary = emp.getaveragesalary(employees, numEmployees);
    cout << "Average Salary: " << averageSalary << endl;

    return 0;
}

