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
		int get_marks ()
		{
			return marks ;
		}
};

int main()
{
	Z obj1 ;
	Z obj2(12);
	
    cout << "\n\nCompiled by Zeeshan Ali " << endl;
}
