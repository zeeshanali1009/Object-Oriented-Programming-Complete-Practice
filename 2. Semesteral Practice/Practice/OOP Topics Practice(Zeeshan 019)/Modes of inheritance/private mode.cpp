#include <iostream>
using namespace std ;
class Class_1
{
	int marks ;
	public :
		void set_marks(int m )
		{
			marks = m ;
		}
		int get_marks ()
		{
			return marks ;
		}
		protected :
			int age = 23 ;
};
class Class_2 : private Class_1
{
	public :
	void  Display ()
	{
			cout << "Marks = " << get_marks() << endl;
	
	}
};
int main()
{
	Class_2 c ;
	c.set_marks(12);
	c.Display();
	cout << "\n\nCompiled by Zeeshan Ali " << endl;
}
