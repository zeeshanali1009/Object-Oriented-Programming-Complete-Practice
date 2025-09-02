/*This program will just make a comparison of values of different 
variables of different classes using the friend functions*/
#include <iostream>
using namespace std;
class A;
class B {
    int num2 ;
public:
    void set(int i) {
        num2 = i;
    }
    
    friend void max(A&, B&);
};
class A {
    int num1 ;
    
public:
    void set(int i) {
        num1 = i;
    }
    
    friend void max(A&, B&);
};

void max(A &a, B &b) {
     int temp ;
     cout << "Values before the process of swapping " << endl;
     cout << "Value of A class variable : " << a.num1 << endl;
     cout << "Value of B class variable : " << b.num2 << endl;
     temp = a.num1 ;
     a.num1 = b.num2 ;
     b.num2 = temp ;
     cout << "Values after the process of swapping " << endl;
     cout << "Value of A class variable : " << a.num1 << endl;
     cout << "Value of B class variable : " << b.num2 << endl;
    
}

int main() {
    A a;
    B b;
    a.set(12);
    b.set(99);
    max(a , b);
    
   cout << "\n\nCompiled by Zeeshan Ali" << endl;
    return 0;
}
