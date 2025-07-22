#include <iostream>
using namespace std;
class Data
{
	string name ;
	int age ;
	int roll_no;
	float cgpa;
	
	
	string *n ;
	int *a ;
	int *r;
	float *c;
	public:
void Input (string name,int age,int roll_no,float cgpa)
{
	this->name = name;
	this->age = age;                                         // This pointer will point two nearest possible data memeber 
	this->roll_no = roll_no;                                //in the scope rround that particular   
	this->cgpa = cgpa;                                      // this pointer

    name = n ;
	age = a ;
	roll_no = r ;
	cgpa = c ;
   /* n =  &name ;
	a = &age;
	r = &roll_no;
	c = &cgpa;*/

	
}
void Display()
{
	cout << "Name : " << name << endl;
	cout << "Age : " << age << endl;
	cout << "Roll no : " << roll_no << endl;
	cout << "Cgpa : " << cgpa << endl;
	cout << endl;
	cout << "Adress of Name variable is : " << n << endl;
	cout << "Adress of Age variable is : " << a << endl;                       // Getting te adreeses of the data members using pointers
	cout << "Adress of roll no variable is  : " << r << endl;                             
	cout << "Adress of Cgpa variable is : " << c << endl;
	cout << endl;
	cout << "Name  : " << *n << endl;
	cout << "Age  : " << *a << endl;                       // Getting all the values using the pointers with reference operater
	cout << "roll no : " << *r << endl;                             
	cout << "Cgpa variable : " << *c << endl;
}
};
    int main()
{
    Data d;
    d.Input("Zeeshan",19,63,3.8);
    d.Display();
    cout << "\n\nCompiled by Zeeshan Ali " << endl;
}
