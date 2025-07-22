/*2. Create a class Rectangle with attributes length and width, each of which defaults
to 1. Provide member functions that calculate the perimeter and the area of the
rectangle. Also, provide set and get functions for the length and width attributes.
The set functions should verify that length and width are each floating-point
numbers larger than 0.0 and less than 20.0.*/
#include <iostream>
using namespace std;
class Rectangle 
{
	public :
	double Length , Width ;
	double Perimeter , Area  ;
	set (double l , double w)
	{
		Length = l ;
		Width = w ;
		Perimeter = 2 * (Length  + Width) ;
		Area =   Length * Width ;
	}
	get ()
	{
		cout << "Perimeter of the rectangle is " << Perimeter << endl;
		cout << "Area of the rectangle is " << Area << endl;
	}
};
int main ()
{
	Rectangle R ;
	double length , width ;
	xdr: 
	cout << "Enter the value of length for the rectangle \n In the range of (0.0 -- 20.0)" << endl;
	cin >> length ;
	if ( length <= 0.0 || length >= 20.0)
	{
     goto xdr  ;
	}
	 xde :
		cout << "Enter the value of width for the rectangle \n In the range of (0.0 -- 20.0)" << endl;
	cin >> width ;
		if ( width <= 0.0 || width >= 20.0)
	{
	   goto xde ;
	}

	cout << "Please wait ....." << endl;
	R.set (length , width );
	R.get();
	cout << "\n\nCompiled by Zeeshan Ali " << endl;
}
