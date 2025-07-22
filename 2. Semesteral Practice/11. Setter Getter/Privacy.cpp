/*This program will just make the use of setter getter for different 
variables of different classes*/
#include <iostream>
using namespace std;
class Student {
    int Age , marks ;
public:
    void setAge(int i) {
        Age = i;
    }
    void setMarks(int j) {
        marks = j;
    }
    void getAge ()
    {
    	cout << "Age : " <<  Age << endl; ;
	}
	void getMarks()
	{
		cout << "Marks : " <<  marks  << endl;
	}
};
int main() {
    Student s;
    s.setAge(123);
    s.setMarks(122);
    s.getAge();
    s.getMarks();
    cout << "\n\nCompiled by Zeeshan Ali" << endl;
    return 0;
}

