#include <iostream>
using namespace std ;
class Class_1
{
		public :
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
			int age = 12 ;
};
class Class_2 : protected Class_1
{
	public :
	void  Display ()
	{
			cout << "Age = " << age << endl;
	
	}
};
int main()
{
	Class_1 a ;
	Class_2 c ;
	a.set_marks(12);
	c.Display();
	cout << "\n\nCompiled by Zeeshan Ali " << endl;
}
