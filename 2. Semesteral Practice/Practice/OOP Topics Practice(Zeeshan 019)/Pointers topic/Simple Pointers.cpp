#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	
	
	int a,b;
	float c ;
	a=12,b=123,c=1234.23;
	cout << "The value of a " << setw(4)<<a << endl;
	cout << "The value of b " << setw(4)<<b << endl;
	cout << "The value of c " << setw(3)<<c << endl;
	cout << "The converted value is given as "  << (int)c<< endl;
	
	
	
	int *d = &a;
	cout << "The adress of variable a is " << &a << endl;
	cout << "The adress of variable a is " << d << endl;
	cout << "The value of a  is " << a << endl;
	cout << "The value of a  is " << *d << endl;
	
	int**e = &d;
	cout << "The adrress of d is  " << &d << endl;
	cout << "The adress of d is " << e << endl;
	cout << "The value of d is " << *e << endl;
	cout << "The value of d is " << **e << endl;
	
	cout << "\n\nCompiled by Zeeshan Ali " << endl;
	
}
