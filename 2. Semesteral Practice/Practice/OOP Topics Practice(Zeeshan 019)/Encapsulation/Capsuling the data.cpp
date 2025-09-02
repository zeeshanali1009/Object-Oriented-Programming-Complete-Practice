#include <iostream>
using namespace std ;
class Data
{
	private :
	string Name = "Any Name " ;
	int marks = 00;
    float Percentage = 0.0 ;
    public :
    void Display ()
    {
    	cout << "Name :  " << Name << endl;
    	cout << "Marks :  " << marks << endl;
    	cout << "Percentage :  " << Percentage << endl;
	}
};
int main()
{
    Data d ;
    d.Display();
    cout << "\n\nCompiled by Zeeshan Ali " << endl;
}
