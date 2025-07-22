#include "iostream"
using namespace std ;
class Practice 
{
	const int marks =12 ;
	const string Name = "Zeeshan";
	int age ;
	float average ;
	public :
	void setAge (int i )
		{
			age = i ;
		}
	void setAverage (int j )
		{
			average = j ;
		}
	int const getAge() {
		return age;
	}
		int const getAverage() {
		return average;
	}
		void display ()
		{
			cout << "Name  : " << Name << endl; 
			cout << "Age : " << getAge() << endl;
			cout << "Marks : " << marks << endl;
			cout << "Average : " << getAverage() << endl;
		}

};
int main()
{
  Practice P;
  P.setAge(100);
  P.setAverage(100);
  P.display();	
}
