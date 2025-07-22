#include <iostream>
using namespace std ;
class Z
{
	int marks ;
	public :
		Z ()
		{
			cout << "Default constructor" << endl;
		}
		Z(int n)
		{
			marks = n ;
			cout << "Parameterized constructor" << endl;
		}
		void set_marks(int m )
		{
			marks = m ;
		}
		void get_marks ()
		{
			cout <<"Marks : " << marks  << endl;
		}
};

int main()
{
	Z obj1 ;
	Z obj2(12);
	obj2.set_marks(12);
	obj2.get_marks();
	Z obj3(obj2)  ;
	obj3.get_marks();
    cout << "\n\nCompiled by Zeeshan Ali " << endl;
}
