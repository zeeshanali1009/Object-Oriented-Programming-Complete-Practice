#include <iostream>
using namespace std;
class class2;
class class1
{
	int num1 ;
	public :
	void setnum1(int i)
	{
		num1 = i ;
	}
	friend void mulanddev(class1 , class2);
};
class class2
{
	int num2 ;
	public :
	void setnum2(int j)
	{
		num2 = j ;
	}
	friend void mulanddev(class1 , class2);
};
 void  mulanddev(class1 a , class2 b)
{
	cout << "Multiplication " << (a.num1 * b.num2 ) << endl;
	cout << "Division " << (a.num1 / b.num2 ) << endl;
}
int main()
{
	class1 x ;
	class2 y ;
	x.setnum1(12);
	y.setnum2(3);
    mulanddev ( x , y);
	return 0 ;
}
