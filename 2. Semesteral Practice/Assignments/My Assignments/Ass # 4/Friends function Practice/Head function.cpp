#include <iostream>
using namespace std;
class Student;
class Admin
{
	void display()
	{
		cout << "I am an admin class." << endl;
	}
	friend void Head(Student , Admin);
};
class Student
{
	void display()
	{
		cout << "I am a Student class." << endl;
	}
	friend void Head(Student , Admin);
};

 void  Head(Student a , Admin b)
{
	cout << "I am a friend function and i can access anything present in my friend class just like that : " << endl;
	a.display();
	b.display();
}
int main()
{
	Student s ;
	Admin a ;
    Head( s , a);
	return 0 ;
}
