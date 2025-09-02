/*This program will just make a comparison of values of different 
variables of different classes using the friend functions*/
#include <iostream>
using namespace std;
class A;
class B {
    int Age , marks ;
public:
    void set(int i) {
        Age = i;
    }
        void set1(int j) {
        marks = j;
    }
    friend void max(A, B);
};
class A {
    int Age,marks;
    
public:
    void set(int i) {
        Age = i;
    }
        void set1(int j) {
        marks = j;
    }
    friend void max(A, B);
};

void max(A a, B b) {
	cout << "I will show you the comparison of age and marks " << endl;
	cout << "1. Age Comparison " << endl;
    if (a.Age > b.Age) {
        cout << "Age of first class is greater" << endl;
    } else {
        cout << "Age of second class is greater" << endl;
    }
    	cout << "2. Marks Comparison " << endl;
        if (a.marks > b.marks) {
        cout << "Marks of first class is greater" << endl;
    } else {
        cout << "Marks of second class is greater" << endl;
    }
    
}

int main() {
    A a;
    B b;
    a.set(12);
    b.set1(100);
    a.set(12);
    b.set1(99);
    max(a, b);
    
   cout << "\n\nCompiled by Zeeshan Ali" << endl;
    return 0;
}

