// Constructor
#include <iostream>
using namespace std;
class Person 
{
	public :
		int Age ;
		string Name ;
		char Gender ;
		Person (int a,string b,char c)
		{
			a=Age ;
			b= Name ;
			c = Gender ;
			
		}
};
int main()
{
	Person myobj(122222 , "Zeeshan" , 'M') ;
 
}
