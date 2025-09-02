#include <iostream>
using namespace std ;
class Z
{
	int marks ;
	public :
		Z ()
		{
			cout << "This is base class default constructor" << endl;
		}
		Z(int n)
		{
			marks = n ;
			cout << "This is base class parameterized constructor" << endl;
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
class Y : public Z
{
	int age ;
	public :
			Y ()
		{
			cout << "This is derived class default constructor" << endl;
		}
		Y(int n)
		{
			age = n ;
			cout << "This is derived class parameterized constructor" << endl;
		}
		Y(int n , int o) : Z (o)
		{
			age = n ;
			cout << "This is derived class parameterized constructor" << endl;
		}
		
	void  Display ()
	{
			cout << "Marks = " << get_marks() << endl;
	
	}
};
int main()
{
	Y obj1 ;
	Y obj2(12);
	Y obj3(12,12);
    cout << "\n\nCompiled by Zeeshan Ali " << endl;
}
