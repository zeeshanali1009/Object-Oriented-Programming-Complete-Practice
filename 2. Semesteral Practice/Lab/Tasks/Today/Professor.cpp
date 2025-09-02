#include <iostream>
#include <string>

using namespace std;

class Staff {
private:
    int staffID;

public:
    Staff(int staffID) {
        this->staffID = staffID;
    }

    int getStaffID() {
        return staffID;
    }
};

class Department {
protected:
    int departmentID;
    string departmentName;

public:
    Department(int departmentID, string departmentName) {
        this->departmentID = departmentID;
        this->departmentName = departmentName;
    }

    int getDepartmentID() {
        return departmentID;
    }

    string getDepartmentName() {
        return departmentName;
    }
};

class Professor : public Staff, public Department {
public:
    Professor(int staffID, int departmentID, string departmentName)
        : Staff(staffID), Department(departmentID, departmentName) {
    }
};

class VisitingProfessor : public Professor {
private:
    int no_of_courses;
    double salary_per_course;

public:
    VisitingProfessor(int staffID, int departmentID, string departmentName, int courses, double salary)
        : Professor(staffID, departmentID, departmentName), no_of_courses(courses), salary_per_course(salary) {
    }

    double totalSalary() {
        return no_of_courses * salary_per_course;
    }

    void display() {
        cout << "Total salary of visiting professor: Rs " << totalSalary() << endl;
    }
};

int main() {
    VisitingProfessor vp(101, 201, "Computer Science", 3, 5000.0);

    cout << "Visiting Professor Details:" << endl;
    cout << "Staff ID: " << vp.getStaffID() << endl;
    cout << "Department ID: " << vp.getDepartmentID() << endl;
    cout << "Department Name: " << vp.getDepartmentName() << endl;
    cout << "Number of Courses: " << vp.totalSalary() << endl;

    vp.display();

    return 0;
}

