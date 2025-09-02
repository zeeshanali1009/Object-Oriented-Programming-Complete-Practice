#include <iostream>
using namespace std;

class Person {
public 
    string name;
    int age;
    public :
    Person(string n, int a) {
        name = n;
        age = a;
    }
};
class Student : public Person {
public:
    int studentID;

    Student(string n, int a, int s) : Person(n, a) {
        studentID = s;
    }
    void Display ()
    {
    	cout << "Name : " << name << endl;
    	cout << "Age : " << age << endl;
    	cout << "Student ID : " << studentID << endl;
	}
};
int main() {

    Student S("Ali", 21, 12143242);
    S.Display();
    return 0;
}


