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
    obj1.set_marks(23);
    cout << "\n\nCompiled by Zeeshan Ali " << endl;
}
