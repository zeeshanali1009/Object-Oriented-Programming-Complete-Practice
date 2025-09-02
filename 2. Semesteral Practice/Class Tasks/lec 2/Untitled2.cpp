#include <iostream>
using namespace std;
class Student_Records
{
	public :
	void obj1()
	{
		cout << "Name = Zeeshan" << endl;
		cout << "Roll no = 019" << endl;
		cout << "Subject  = OOP " << endl;
	}
};
int main ()
{
	Student_Records obj2 ;
	obj2.obj1();
	return 0 ;
}
